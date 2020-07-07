#include "atmel_start.h"
#include <string.h>
volatile uint16_t period_after_capture      = 0;
volatile uint16_t pulse_width_after_capture = 0;
volatile uint8_t  capture_duty              = 0;
volatile uint16_t capture_frequency         = 0;

volatile bool rtc_500ms_flg = 0;
const char    tx_buf[]      = {"\ncaptured data:"};

void send_data()
{
	uint8_t i           = 0;
	char    duty_str[4] = {0}, freq_str[10] = {0}, tx_data[30] = {0};
	itoa(capture_duty, duty_str, 10);      // duty cycle to ASCII
	ltoa(capture_frequency, freq_str, 10); // frequency to ASCII
	strcat(tx_data, tx_buf);               // tx_data=tx_buf+duty cycle string+frequency string
	strcat(tx_data, duty_str);
	strcat(tx_data, "% ");
	strcat(tx_data, freq_str);
	strcat(tx_data, "Hz");
	while (tx_data[i] != 0) // check for null character
	{
		while (!(USART0.STATUS & USART_DREIF_bm))
			; // check for TX buffer empty
		USART0.TXDATAL = tx_data[i];
		i++;
	}
}

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	while (1) {
		if (TCB0.INTFLAGS) {
			TCB0.INTFLAGS             = 1;
			period_after_capture      = TCB0.CNT;
			pulse_width_after_capture = TCB0.CCMP;
			capture_duty              = ((pulse_width_after_capture * 100) / period_after_capture);
			if (capture_duty > 100) {
				capture_duty = 0;
			}
			capture_frequency = F_CPU / period_after_capture;
		}
		if (rtc_500ms_flg == 1) {
			rtc_500ms_flg = 0;
			send_data();
		}
	}
}

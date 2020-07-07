/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */

#include <driver_init.h>
#include <compiler.h>
volatile uint8_t change_duty_cycle = 10;
extern rtc_500ms_flg;

ISR(RTC_CNT_vect)
{
	change_duty_cycle += 10;
	if (change_duty_cycle > 100) {
		change_duty_cycle = 10;
	}
	TCA0.SINGLE.CMP0 = change_duty_cycle;
	rtc_500ms_flg    = 1;

	/* Insert your RTC Overflow interrupt handling code */

	/* Overflow interrupt flag has to be cleared manually */
	RTC.INTFLAGS = RTC_OVF_bm;
}

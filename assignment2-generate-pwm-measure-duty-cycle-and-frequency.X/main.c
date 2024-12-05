 /*
 * MAIN Generated Driver File
 *
 * @file main.c
 *
 * @defgroup main MAIN
 *
 * @brief This is the generated driver implementation file for the MAIN driver.
 *
 * @version MAIN Driver Version 1.0.2
 *
 * @version Package Version: 3.1.2
*/

/*
© [2024] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip
    software and any derivatives exclusively with Microchip products.
    You are responsible for complying with 3rd party license terms
    applicable to your use of 3rd party software (including open source
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.?
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR
    THIS SOFTWARE.
*/
#include "mcc_generated_files/system/system.h"
#include <string.h>
#include <stdio.h>

volatile uint16_t period_after_capture      = 0;
volatile uint16_t pulse_width_after_capture = 0;
volatile uint8_t  capture_duty              = 0;
volatile uint16_t capture_frequency         = 0;

volatile bool rtc_500ms_flg = 0;
volatile uint8_t change_duty_cycle = 10;

void RTC_interrupt_handler();
void USART_send_data();

int main(void)
{
    /* Initializes MCU, drivers and middleware */
    SYSTEM_Initialize();
    RTC_SetOVFIsrCallback(RTC_interrupt_handler);
    while (1) {
        if (TCB0.INTFLAGS) {
            TCB0.INTFLAGS             = TCB_CAPT_bm;
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
            USART_send_data();
        }
    }
}

void RTC_interrupt_handler()
{
    change_duty_cycle += 10;
    if (change_duty_cycle > 100) {
        change_duty_cycle = 10;
    }
    TCA0.SINGLE.CMP0 = change_duty_cycle;
    rtc_500ms_flg    = 1;
}

void USART_send_data()
{
    printf("captured data: %u%% %uHz\n", capture_duty, capture_frequency);
}
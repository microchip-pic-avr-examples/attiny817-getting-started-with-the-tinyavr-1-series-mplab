/**
 * CCL Generated Driver File
 *
 * @file ccl.c
 *
 * @ingroup  ccl
 *
 * @brief This file contains the API implementations for the CCL driver.
 *
 * @version Driver Version 1.1.1
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

#include "../ccl.h"

int8_t CCL_Initialize(void)
{
    //INSEL0 MASK; INSEL1 MASK;
    CCL.LUT0CTRLB = 0x0;

    //INSEL2 MASK;
    CCL.LUT0CTRLC = 0x0;

    //INSEL0 TCA0; INSEL1 EVENT1;
    CCL.LUT1CTRLB = 0x48;

    //INSEL2 EVENT0;
    CCL.LUT1CTRLC = 0x3;

    //SEQSEL DISABLE;
    CCL.SEQCTRL0 = 0x0;

    //
    CCL.TRUTH0 = 0x0;

    //
    CCL.TRUTH1 = 0xac;

    //CLKSRC CLKPER; EDGEDET DIS; ENABLE disabled; FILTSEL DISABLE; OUTEN disabled;
    CCL.LUT0CTRLA = 0x0;

    //CLKSRC CLKPER; EDGEDET DIS; ENABLE enabled; FILTSEL DISABLE; OUTEN enabled;
    CCL.LUT1CTRLA = 0x9;

    //ENABLE enabled; RUNSTDBY disabled;
    CCL.CTRLA = 0x1;


    return 0;
}


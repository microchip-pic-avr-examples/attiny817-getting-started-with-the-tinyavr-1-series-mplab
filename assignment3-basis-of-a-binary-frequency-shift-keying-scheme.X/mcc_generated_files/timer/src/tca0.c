/**
 * TCA0 Generated Driver File
 *
 * @file tca0.c
 *
 * @ingroup tca0_normal
 *
 * @brief Driver implementation for the TCA0 module in Normal (16-bit) mode.
 *
 * @version TCA0 Driver Version 3.0.0
 *
 * @version Package Version 7.0.0
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

#include "../tca0.h"

static void (*TCA0_CMP0Callback)(void) = NULL;
static void (*TCA0_CMP1Callback)(void) = NULL;
static void (*TCA0_CMP2Callback)(void) = NULL;
static void (*TCA0_OVFCallback)(void) = NULL;

void TCA0_Initialize(void) 
{
    TCA0.SINGLE.CMP0 = 0xAU;  // CMP0 0xA

    TCA0.SINGLE.CMP1 = 0x0;  // CMP1 0x0

    TCA0.SINGLE.CMP2 = 0x0;  // CMP2 0x0

    TCA0.SINGLE.CNT = 0x0;  // CNT 0x0

    TCA0.SINGLE.CTRLB = (0 << TCA_SINGLE_ALUPD_bp)   // ALUPD disabled
        | (1 << TCA_SINGLE_CMP0EN_bp)   // CMP0EN enabled
        | (0 << TCA_SINGLE_CMP1EN_bp)   // CMP1EN disabled
        | (0 << TCA_SINGLE_CMP2EN_bp)   // CMP2EN disabled
        | (TCA_SINGLE_WGMODE_SINGLESLOPE_gc);  // WGMODE SINGLESLOPE

    TCA0.SINGLE.CTRLC = (0 << TCA_SINGLE_CMP0OV_bp)   // CMP0OV disabled
        | (0 << TCA_SINGLE_CMP1OV_bp)   // CMP1OV disabled
        | (0 << TCA_SINGLE_CMP2OV_bp);  // CMP2OV disabled

    TCA0.SINGLE.CTRLD = (0 << TCA_SINGLE_SPLITM_bp);  // SPLITM disabled

    TCA0.SINGLE.CTRLECLR = (TCA_SINGLE_CMD_NONE_gc)   // CMD NONE
        | (0 << TCA_SINGLE_DIR_bp)   // DIR disabled
        | (0 << TCA_SINGLE_LUPD_bp);  // LUPD disabled

    TCA0.SINGLE.CTRLESET = (TCA_SINGLE_CMD_NONE_gc)   // CMD NONE
        | (TCA_SINGLE_DIR_UP_gc)   // DIR UP
        | (0 << TCA_SINGLE_LUPD_bp);  // LUPD disabled

    TCA0.SINGLE.CTRLFCLR = (0 << TCA_SINGLE_CMP0BV_bp)   // CMP0BV disabled
        | (0 << TCA_SINGLE_CMP1BV_bp)   // CMP1BV disabled
        | (0 << TCA_SINGLE_CMP2BV_bp)   // CMP2BV disabled
        | (0 << TCA_SINGLE_PERBV_bp);  // PERBV disabled

    TCA0.SINGLE.CTRLFSET = (0 << TCA_SINGLE_CMP0BV_bp)   // CMP0BV disabled
        | (0 << TCA_SINGLE_CMP1BV_bp)   // CMP1BV disabled
        | (0 << TCA_SINGLE_CMP2BV_bp)   // CMP2BV disabled
        | (0 << TCA_SINGLE_PERBV_bp);  // PERBV disabled

    TCA0.SINGLE.DBGCTRL = (0 << TCA_SINGLE_DBGRUN_bp);  // DBGRUN disabled

    TCA0.SINGLE.EVCTRL = (0 << TCA_SINGLE_CNTEI_bp)   // CNTEI disabled
        | (TCA_SINGLE_EVACT_POSEDGE_gc);  // EVACT POSEDGE

    TCA0.SINGLE.INTCTRL = (0 << TCA_SINGLE_CMP0_bp)   // CMP0 disabled
        | (0 << TCA_SINGLE_CMP1_bp)   // CMP1 disabled
        | (0 << TCA_SINGLE_CMP2_bp)   // CMP2 disabled
        | (0 << TCA_SINGLE_OVF_bp);  // OVF disabled

    TCA0.SINGLE.INTFLAGS = (0 << TCA_SINGLE_CMP0_bp)   // CMP0 disabled
        | (0 << TCA_SINGLE_CMP1_bp)   // CMP1 disabled
        | (0 << TCA_SINGLE_CMP2_bp)   // CMP2 disabled
        | (0 << TCA_SINGLE_OVF_bp);  // OVF disabled

    TCA0.SINGLE.PER = 0x64U;  // PER 0x64

    TCA0.SINGLE.TEMP = 0x0;  // TEMP 0x0

    TCA0.SINGLE.CTRLA = (TCA_SINGLE_CLKSEL_DIV1_gc)   // CLKSEL DIV1
        | (1 << TCA_SINGLE_ENABLE_bp);  // ENABLE enabled
}

void TCA0_Deinitialize(void)
{
    TCA0.SINGLE.CTRLA &= ~TCA_SINGLE_ENABLE_bm;

    TCA0.SINGLE.CTRLA = 0x0;
    TCA0.SINGLE.CTRLB = 0x0;
    TCA0.SINGLE.CTRLC = 0x0;
    TCA0.SINGLE.CTRLD = 0x0;
    
    TCA0.SINGLE.CNT = 0x0;
    TCA0.SINGLE.PER = 0xFFFFU;
    TCA0.SINGLE.CMP0 = 0x0;
    TCA0.SINGLE.CMP1 = 0x0;
    TCA0.SINGLE.CMP2 = 0x0;
    TCA0.SINGLE.EVCTRL = 0x0;
    TCA0.SINGLE.CTRLESET = 0x0;
    TCA0.SINGLE.CTRLECLR = 0x0;
    TCA0.SINGLE.CTRLFSET = 0x0;
    TCA0.SINGLE.CTRLFCLR = 0x0;

    TCA0.SINGLE.INTCTRL = 0x0;
    TCA0.SINGLE.INTFLAGS = ~0x0;
}

void TCA0_Start(void)
{
    TCA0.SINGLE.CTRLA |= TCA_SINGLE_ENABLE_bm;
}

void TCA0_Stop(void)
{
    TCA0.SINGLE.CTRLA &= ~TCA_SINGLE_ENABLE_bm;
}

void TCA0_CounterSet(uint16_t count)
{
    TCA0.SINGLE.CNT = count;
}

uint16_t TCA0_CounterGet(void)
{
    return TCA0.SINGLE.CNT;
}

void TCA0_PeriodSet(uint16_t periodVal)
{
    TCA0.SINGLE.PER = periodVal;
}

uint16_t TCA0_PeriodGet(void)
{
    return TCA0.SINGLE.PER;
}

void TCA0_Compare0Set(uint16_t value)
{
    TCA0.SINGLE.CMP0 = value;
}

void TCA0_Compare1Set(uint16_t value)
{
    TCA0.SINGLE.CMP1 = value;
}

void TCA0_Compare2Set(uint16_t value)
{
    TCA0.SINGLE.CMP2 = value;
}

uint16_t TCA0_MaxCountGet(void)
{
    return TCA0_MAX_COUNT;
}

void TCA0_ModeSet(TCA_SINGLE_WGMODE_t mode)
{
  if((mode == TCA_SINGLE_WGMODE_NORMAL_gc) ||
     (mode == TCA_SINGLE_WGMODE_FRQ_gc) ||
     (mode == TCA_SINGLE_WGMODE_SINGLESLOPE_gc) ||
     (mode == TCA_SINGLE_WGMODE_DSTOP_gc) ||
     (mode == TCA_SINGLE_WGMODE_DSBOTH_gc) ||
     (mode == TCA_SINGLE_WGMODE_DSBOTTOM_gc))
  {
      uint8_t temp = (TCA0.SINGLE.CTRLB & ~TCA_SINGLE_WGMODE_gm) |
             (mode & TCA_SINGLE_WGMODE_gm);
      TCA0.SINGLE.CTRLB = temp;
  }
}

void TCA0_OverflowStatusClear(void)
{
    TCA0.SINGLE.INTFLAGS = TCA_SINGLE_OVF_bm; 
}

bool TCA0_OverflowStatusGet(void)
{
    return ((TCA0.SINGLE.INTFLAGS & TCA_SINGLE_OVF_bm) > 0U);
}

void TCA0_CMP0MatchStatusClear(void)
{
    TCA0.SINGLE.INTFLAGS = TCA_SINGLE_CMP0_bm; /* Clear Compare Channel-0 Interrupt Flag */
}

bool TCA0_CMP0MatchStatusGet(void)
{
    return ((TCA0.SINGLE.INTFLAGS & TCA_SINGLE_CMP0_bm) > 0U);
}

void TCA0_CMP1MatchStatusClear(void)
{
    TCA0.SINGLE.INTFLAGS = TCA_SINGLE_CMP1_bm; /* Clear Compare Channel-1 Interrupt Flag */
}

bool TCA0_CMP1MatchStatusGet(void)
{
    return ((TCA0.SINGLE.INTFLAGS & TCA_SINGLE_CMP1_bm) > 0U);
}

void TCA0_CMP2MatchStatusClear(void)
{
    TCA0.SINGLE.INTFLAGS = TCA_SINGLE_CMP2_bm; 
}

bool TCA0_CMP2MatchStatusGet(void)
{
    return ((TCA0.SINGLE.INTFLAGS & TCA_SINGLE_CMP2_bm) > 0U);
}

void TCA0_Tasks(void)
{
    if(0U != (TCA0.SINGLE.INTFLAGS & TCA_SINGLE_OVF_bm))
    {
        if(NULL != TCA0_OVFCallback)
        {
          (*TCA0_OVFCallback)();
        }
        TCA0.SINGLE.INTFLAGS = TCA_SINGLE_OVF_bm;
    }

    if(0U != (TCA0.SINGLE.INTFLAGS & TCA_SINGLE_CMP0_bm))
    {
        if(NULL != TCA0_CMP0Callback)
        {
            (*TCA0_CMP0Callback)();
        }
        TCA0.SINGLE.INTFLAGS = TCA_SINGLE_CMP0_bm;
    }

    if(0U != (TCA0.SINGLE.INTFLAGS & TCA_SINGLE_CMP1_bm))
    {
        if(NULL != TCA0_CMP1Callback)
        {
            (*TCA0_CMP1Callback)();
        }
        TCA0.SINGLE.INTFLAGS = TCA_SINGLE_CMP1_bm;
    }

    if(0U != (TCA0.SINGLE.INTFLAGS & TCA_SINGLE_CMP2_bm))
    {
        if(NULL != TCA0_CMP2Callback)
        {
            (*TCA0_CMP2Callback)();
        }
        TCA0.SINGLE.INTFLAGS = TCA_SINGLE_CMP2_bm;
    }
}

void TCA0_OverflowCallbackRegister(TCA0_cb_t CallbackHandler)
{
    TCA0_OVFCallback = CallbackHandler;
}

void TCA0_Compare0CallbackRegister(TCA0_cb_t CallbackHandler)
{
    TCA0_CMP0Callback = CallbackHandler;
}

void TCA0_Compare1CallbackRegister(TCA0_cb_t CallbackHandler)
{
     TCA0_CMP1Callback = CallbackHandler;
}

void TCA0_Compare2CallbackRegister(TCA0_cb_t CallbackHandler)
{
     TCA0_CMP2Callback = CallbackHandler;
}

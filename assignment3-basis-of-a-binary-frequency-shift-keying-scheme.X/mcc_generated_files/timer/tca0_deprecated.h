/**
 * TCA0 Generated Driver API Header File
 * 
 * @file tca0.h
 * 
 * @ingroup tca0_normal
 * 
 * @brief This file contains the deprecated macros or APIs for the TCA0 driver.
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

#ifndef TCA0_DEPRECATED_H
#define TCA0_DEPRECATED_H

#warning "The tca0_deprecated.h file contains the deprecated macros or functions. Replace the deprecated macro or functions with the recommended alternative."

/**
 * @misradeviation{@advisory,2.5}
 * MCC Melody drivers provide macros that can be added to an application.
 * It depends on the application whether a macro is used or not. 
 */
 
/**
 * @ingroup tca0_normal
 * @brief Defines the Custom Name for the \ref TCA0_CounterGet API. 
 *        The TCA0_Read will be deprecated in the future release. Use TCA0_CounterGet instead.
 */
/* cppcheck-suppress misra-c2012-2.5 */  
#define TCA0_Read TCA0_CounterGet
/**
 * @ingroup tca0_normal
 * @brief Defines the Custom Name for the \ref TCA0_PeriodSet API. 
 *        The TCA0_Write will be deprecated in the future release. Use TCA0_PeriodSet instead.
 */
/* cppcheck-suppress misra-c2012-2.5 */  
#define TCA0_Write TCA0_PeriodSet
/**
 * @ingroup tca0_normal
 * @brief Defines the Custom Name for the \ref TCA0_OverflowStatusClear API. 
 *        The TCA0_ClearOverflowInterruptFlag will be deprecated in the future release. Use TCA0_OverflowStatusClear instead.
 */
/* cppcheck-suppress misra-c2012-2.5 */  
#define TCA0_ClearOverflowInterruptFlag TCA0_OverflowStatusClear
/**
 * @ingroup tca0_normal
 * @brief Defines the Custom Name for the \ref TCA0_OverflowStatusGet API. 
 *        The TCA0_IsOverflowInterruptFlagSet will be deprecated in the future release. Use TCA0_OverflowStatusGet instead.
 */
/* cppcheck-suppress misra-c2012-2.5 */  
#define TCA0_IsOverflowInterruptFlagSet TCA0_OverflowStatusGet
/**
 * @ingroup tca0_normal
 * @brief Defines the Custom Name for the \ref TCA0_CMP0MatchStatusClear API. 
 *        The TCA0_ClearCMP0InterruptFlag will be deprecated in the future release. Use TCA0_CMP0MatchStatusClear instead.
 */
/* cppcheck-suppress misra-c2012-2.5 */  
#define TCA0_ClearCMP0InterruptFlag TCA0_CMP0MatchStatusClear
/**
 * @ingroup tca0_normal
 * @brief Defines the Custom Name for the \ref TCA0_CMP0MatchStatusGet API. 
 *        The TCA0_IsCMP0InterruptFlagSet will be deprecated in the future release. Use TCA0_CMP0MatchStatusGet instead.
 */
/* cppcheck-suppress misra-c2012-2.5 */  
#define TCA0_IsCMP0InterruptFlagSet TCA0_CMP0MatchStatusGet
/**
 * @ingroup tca0_normal
 * @brief Defines the Custom Name for the \ref TCA0_CMP1MatchStatusClear API. 
 *        The TCA0_ClearCMP1InterruptFlag will be deprecated in the future release. Use TCA0_CMP1MatchStatusClear instead.
 */
/* cppcheck-suppress misra-c2012-2.5 */  
#define TCA0_ClearCMP1InterruptFlag TCA0_CMP1MatchStatusClear
/**
 * @ingroup tca0_normal
 * @brief Defines the Custom Name for the \ref TCA0_CMP1MatchStatusGet API. 
 *        The TCA0_IsCMP1InterruptFlagSet will be deprecated in the future release. Use TCA0_CMP1MatchStatusGet instead.
 */
/* cppcheck-suppress misra-c2012-2.5 */  
#define TCA0_IsCMP1InterruptFlagSet TCA0_CMP1MatchStatusGet
/**
 * @ingroup tca0_normal
 * @brief Defines the Custom Name for the \ref TCA0_CMP2MatchStatusClear API. 
 *        The TCA0_ClearCMP2InterruptFlag will be deprecated in the future release. Use TCA0_CMP2MatchStatusClear instead.
 */
/* cppcheck-suppress misra-c2012-2.5 */  
#define TCA0_ClearCMP2InterruptFlag TCA0_CMP2MatchStatusClear
/**
 * @ingroup tca0_normal
 * @brief Defines the Custom Name for the \ref TCA0_CMP2MatchStatusGet API. 
 *        The TCA0_IsCMP2InterruptFlagSet will be deprecated in the future release. Use TCA0_CMP2MatchStatusGet instead.
 */
/* cppcheck-suppress misra-c2012-2.5 */ 
#define TCA0_IsCMP2InterruptFlagSet TCA0_CMP2MatchStatusGet
/**
 * @ingroup tca0_normal
 * @brief Defines the Custom Name for the \ref TCA0_FrequencySet API. 
 *        The TCA0_WaveformFreqRegCountSet will be deprecated in the future release. Use TCA0_FrequencySet instead.
 */
/* cppcheck-suppress misra-c2012-2.5 */  
#define TCA0_WaveformFreqRegCountSet TCA0_FrequencySet
/**
 * @ingroup tca0_normal
 * @brief Defines the Custom Name for the \ref TCA0_FrequencyGet API. 
 *        The TCA0_WaveformFreqRegCountGet will be deprecated in the future release. Use TCA0_FrequencyGet instead.
 */
/* cppcheck-suppress misra-c2012-2.5 */  
#define TCA0_WaveformFreqRegCountGet TCA0_FrequencyGet
/**
 * @ingroup tca0_normal
 * @brief Defines the Custom Name for the \ref TCA0_WO1OffsetSet API. 
 *        The TCA0_WO1OffsetRegCountSet will be deprecated in the future release. Use TCA0_WO1OffsetSet instead.
 */
/* cppcheck-suppress misra-c2012-2.5 */  
#define TCA0_WO1OffsetRegCountSet TCA0_WO1OffsetSet
/**
 * @ingroup tca0_normal
 * @brief Defines the Custom Name for the \ref TCA0_WO1OffsetGet API. 
 *        The TCA0_WO1OffsetRegCountGet will be deprecated in the future release. Use TCA0_WO1OffsetGet instead.
 */
/* cppcheck-suppress misra-c2012-2.5 */  
#define TCA0_WO1OffsetRegCountGet TCA0_WO1OffsetGet
/**
 * @ingroup tca0_normal
 * @brief Defines the Custom Name for the \ref TCA0_WO2OffsetSet API. 
 *        The TCA0_WO2OffsetRegCountSet will be deprecated in the future release. Use TCA0_WO2OffsetSet instead.
 */
/* cppcheck-suppress misra-c2012-2.5 */  
#define TCA0_WO2OffsetRegCountSet TCA0_WO2OffsetSet
/**
 * @ingroup tca0_normal
 * @brief Defines the Custom Name for the \ref TCA0_WO2OffsetGet API. 
 *        The TCA0_WO2OffsetRegCountGet will be deprecated in the future release. Use TCA0_WO2OffsetGet instead.
 */
/* cppcheck-suppress misra-c2012-2.5 */  
#define TCA0_WO2OffsetRegCountGet TCA0_WO2OffsetGet
/**
 * @ingroup tca0_normal
 * @brief Defines the Custom Name for the \ref TCA0_CounterGet API. 
 *        The TCA0CounterGet will be deprecated in the future release. Use TCA0_CounterGet instead.
 */
/* cppcheck-suppress misra-c2012-2.5 */  
#define TCA0CounterGet TCA0_CounterGet
/**
 * @ingroup tca0_normal
 * @brief Defines the Custom Name for the \ref TCA0_CounterSet API. 
 *        The TCA0CounterSet will be deprecated in the future release. Use TCA0_CounterSet instead.
 */
/* cppcheck-suppress misra-c2012-2.5 */  
#define TCA0CounterSet TCA0_CounterSet

#endif //TCA0_DEPRECATED_H
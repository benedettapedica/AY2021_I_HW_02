/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include "Interrupt.h"

// including in this header file one single function needed to program the 7 different configuration through PWMs;
// by definition, the first value regards the Red channel.
// the function has this structure:
// Settings(Period_Red, Period_Green, CompareValue_Red, CompareValue_Green, CompareMode_Red, CompareMode_Green)

void Settings(uint8 value1, uint8 value2,uint8 value3, uint8 value4, uint8 value5, uint8 value6); 

// setting the reset counter for the PWMs

void Reset_Counter(void);

/* [] END OF FILE */

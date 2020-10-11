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

#ifndef __INTERRUPT_H
#define __INTERRUPT_H

    #include "project.h"
    
    uint8 flag;
 
    CY_ISR_PROTO(Custom_ISR);
    
#endif

uint8 flag; 

// including in this header file all the functions needed to program different configuration through PWMs;
// by definition, the first value regards the Red channel.

void Compare_Mode(uint8 value1, uint8 value2); 
void Period(uint8 value1, uint8 value2); 
void Compare(uint8 value1, uint8 value2); 
void Reset_Counter(void);


/* [] END OF FILE */

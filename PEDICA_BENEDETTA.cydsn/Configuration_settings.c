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
#include "Configuration_settings.h"
#include "Interrupt.h"


//including in this .c file all the settings for the PWMs basing on different configurations

void Settings(uint8 value1, uint8 value2,uint8 value3, uint8 value4, uint8 value5, uint8 value6) 
{
    PWM_Red_WritePeriod(value1);
    PWM_Green_WritePeriod(value2);     

    PWM_Red_WriteCompare(value3); 
    PWM_Green_WriteCompare(value4);

    PWM_Red_SetCompareMode(value5);
    PWM_Green_SetCompareMode(value6);   
}

void Reset_Counter(void) 
{
    PWM_Red_WriteCounter(0);
    PWM_Green_WriteCounter(0);    
}

/* [] END OF FILE */

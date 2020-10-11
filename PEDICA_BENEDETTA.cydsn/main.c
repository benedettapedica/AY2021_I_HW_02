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
/**
* \file main.c
* \brief Main source file for the Assignment 02: driver for RGB LED strips.
*
* This source file allows to blink Red and Green channels of a LED with 7 different
* configurations by using the onboard push button. 
*
* \author: Benedetta Pedica
* \date: October 08, 2020
*/
#include "project.h"

#define LOW 0 // Low digital state
#define BUTTON_PRESSED LOW // PushButton is in pull-up configuration

int main(void)
{
    CyGlobalIntEnable; 
    isr_StartEx(Custom_ISR);
    int flag = 1;
    Clock_PWM_Start();
    PWM_Green_Start();
    PWM_Red_Start();
            
        for(;;)
        {
            if ( PushButton_Read() == BUTTON_PRESSED)
            {
              flag ++;
            }
        
        if (flag == 2)
           {
             PWM_Green_SetCompareMode(3);
             PWM_Green_WritePeriod(255);
             PWM_Green_WriteCompare(127);
             PWM_Red_WritePeriod(255);
             PWM_Red_WriteCompare(255);
            }
        if (flag == 3)
            {             
             PWM_Green_WritePeriod(255);
             PWM_Green_WriteCompare(255);
             PWM_Red_SetCompareMode(2);
             PWM_Red_WritePeriod(255);
             PWM_Red_WriteCompare(127);
            }
        if (flag == 4)
            {             
             PWM_Green_WritePeriod(255);
             PWM_Green_WriteCompare(255);
             PWM_Red_SetCompareMode(2);
             PWM_Red_WritePeriod(255);
             PWM_Red_WriteCompare(127);
            }    
}
}


/* [] END OF FILE */

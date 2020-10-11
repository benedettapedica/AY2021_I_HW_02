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
#include "Interrupt.h"

int main(void)
{
    CyGlobalIntEnable; 
    isr_StartEx(Custom_ISR); //setting of interrupt vector adress
    Clock_PWM_Start();
    Clock_DEB_Start();
    PWM_Green_Start();
    PWM_Red_Start();
    
    flag=1; 
 
    //initializing pattern index
            
        for (;;)
        {
        if (flag ==1) //first configuration
        {
           Compare_Mode(1,1); 
           Period(255, 255); 
           Compare(0,0); 
           Reset_Counter(); 
        
        while(flag == 1);
        }
            
        else if (flag == 2)
           {
            Compare_Mode(3,3); 
            Period(255, 255); 
            Compare(0,127); //first value is for red 
            Reset_Counter(); 
        while(flag == 2);
            }
        
}
}


/* [] END OF FILE */

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
#include "Configuration_settings.h"

int main(void)
{
    CyGlobalIntEnable; 
    isr_StartEx(Custom_ISR); //setting of interrupt vector adress
    //initializing clocks
    Clock_PWM_Start();
    Clock_DEB_Start();
    //initializing PWMs
    PWM_Green_Start();
    PWM_Red_Start();
    
    flag=0;   //setting initial value 
 
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
            Compare_Mode(1,1); 
            Period(255, 255); 
            Compare(0,127); 
            Reset_Counter(); 
        while(flag == 2);
            }
        
        else if (flag == 3)
           {
            Compare_Mode(3,1); 
            Period(255, 255); 
            Compare(127,0); 
            Reset_Counter(); 
        while(flag == 3);
            }
        
        else if (flag == 4)
           {
            Compare_Mode(1,3); 
            Period(127, 127); 
            Compare(63,63); 
            Reset_Counter(); 
        while(flag == 4);
            }
        
        else if (flag == 5)
           {
            Compare_Mode(3,1); 
            Period(63, 63); 
            Compare(31,31); 
            Reset_Counter(); 
        while(flag == 5);
            }
        
        else if (flag == 6)
           {
            Compare_Mode(1,1); 
            Period(255, 255); 
            Compare(63,127); 
            Reset_Counter(); 
        while(flag == 6);
            }
        
        else if (flag == 7)
           {
            Compare_Mode(3,1); 
            Period(255, 127); 
            Compare(127,63); 
            Reset_Counter(); 
        while(flag == 7);
            }
        
}
}


/* [] END OF FILE */

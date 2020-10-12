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
*
* \brief Main source file for the Assignment 02: driver for RGB LED strips.
*
* This source file allows to blink Red and Green channels of a RGB LED with 7 different
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
 
    //using a cycle to switch to sequential configurations
    //the value of the flag represent the number of the pattern
    //use of a while at the end to make sure to stay in the pattern until button is pressed again
       
        for (;;) 
        {
        if (flag ==1) 
        {
           Settings(255,255,0,0,1,1);
           Reset_Counter(); 
                   
        while(flag == 1);  
        }
            
        else if (flag == 2)
           {
            Settings(255,255,0,127,1,1);
            Reset_Counter(); 
        while(flag == 2);
            }
        
        else if (flag == 3)
           {
            Settings(255,255,127,0,3,1);
            Reset_Counter(); 
        while(flag == 3);
            }
        
        else if (flag == 4)
           {
            Settings(127,127,63,63,1,3);
            Reset_Counter(); 
        while(flag == 4);
            }
        
        else if (flag == 5)
           {
            Settings(63,63,31,31,3,1); 
            Reset_Counter(); 
        while(flag == 5);
            }
        
        else if (flag == 6)
           {
            Settings(255,255,63,127,1,1);
            Reset_Counter(); 
        while(flag == 6);
            }
        
        else if (flag == 7)
           {
            Settings(255,127,127,63,3,1);
            Reset_Counter(); 
        while(flag == 7);
            }
        
}
}


/* [] END OF FILE */

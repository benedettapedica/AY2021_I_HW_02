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
#include "RG_driver.h"
void RGBLed_Start(void)
{
    // Start PWM Components
    PWM_Green_Start(); // Start PWM connected to green channel
    PWM_Red_Start();  // Start PWM connected to red channel
}
void RGBLed_Stop(void)
{
    // Stop PWM Components
    PWM_Green_Stop(); // Stop PWM connected to green channel
    PWM_Red_Stop();  // Stop PWM connected to red channel
}

/* [] END OF FILE */

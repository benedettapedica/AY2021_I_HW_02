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
#include "Interrupt.h"
// Include required header files
#include "RG_Driver.h"
#include "Green_LED.h"
#include "Red_LED.h"

CY_ISR(Custom_ISR)
{
    flag ++;
    if (flag == 8)
    {
        flag=1;
    }

}

/* [] END OF FILE */

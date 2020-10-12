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

CY_ISR(Custom_ISR)
{
    flag ++; //scanning the flag to get through sequential configurations
    if(flag==8)
    {
       flag=1; //using a cycle to return from state 7 to state 1
    }
}


/* [] END OF FILE */

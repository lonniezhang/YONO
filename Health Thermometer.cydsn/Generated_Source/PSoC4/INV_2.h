/*******************************************************************************
* File Name: INV_2.h  
* Version 2.10
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_INV_2_H) /* Pins INV_2_H */
#define CY_PINS_INV_2_H

#include "cytypes.h"
#include "cyfitter.h"
#include "INV_2_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    INV_2_Write(uint8 value) ;
void    INV_2_SetDriveMode(uint8 mode) ;
uint8   INV_2_ReadDataReg(void) ;
uint8   INV_2_Read(void) ;
uint8   INV_2_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define INV_2_DRIVE_MODE_BITS        (3)
#define INV_2_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - INV_2_DRIVE_MODE_BITS))

#define INV_2_DM_ALG_HIZ         (0x00u)
#define INV_2_DM_DIG_HIZ         (0x01u)
#define INV_2_DM_RES_UP          (0x02u)
#define INV_2_DM_RES_DWN         (0x03u)
#define INV_2_DM_OD_LO           (0x04u)
#define INV_2_DM_OD_HI           (0x05u)
#define INV_2_DM_STRONG          (0x06u)
#define INV_2_DM_RES_UPDWN       (0x07u)

/* Digital Port Constants */
#define INV_2_MASK               INV_2__MASK
#define INV_2_SHIFT              INV_2__SHIFT
#define INV_2_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define INV_2_PS                     (* (reg32 *) INV_2__PS)
/* Port Configuration */
#define INV_2_PC                     (* (reg32 *) INV_2__PC)
/* Data Register */
#define INV_2_DR                     (* (reg32 *) INV_2__DR)
/* Input Buffer Disable Override */
#define INV_2_INP_DIS                (* (reg32 *) INV_2__PC2)


#if defined(INV_2__INTSTAT)  /* Interrupt Registers */

    #define INV_2_INTSTAT                (* (reg32 *) INV_2__INTSTAT)

#endif /* Interrupt Registers */


/***************************************
* The following code is DEPRECATED and 
* must not be used.
***************************************/

#define INV_2_DRIVE_MODE_SHIFT       (0x00u)
#define INV_2_DRIVE_MODE_MASK        (0x07u << INV_2_DRIVE_MODE_SHIFT)


#endif /* End Pins INV_2_H */


/* [] END OF FILE */

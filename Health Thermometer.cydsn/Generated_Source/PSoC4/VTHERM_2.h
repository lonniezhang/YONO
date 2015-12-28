/*******************************************************************************
* File Name: VTHERM_2.h  
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

#if !defined(CY_PINS_VTHERM_2_H) /* Pins VTHERM_2_H */
#define CY_PINS_VTHERM_2_H

#include "cytypes.h"
#include "cyfitter.h"
#include "VTHERM_2_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    VTHERM_2_Write(uint8 value) ;
void    VTHERM_2_SetDriveMode(uint8 mode) ;
uint8   VTHERM_2_ReadDataReg(void) ;
uint8   VTHERM_2_Read(void) ;
uint8   VTHERM_2_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define VTHERM_2_DRIVE_MODE_BITS        (3)
#define VTHERM_2_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - VTHERM_2_DRIVE_MODE_BITS))

#define VTHERM_2_DM_ALG_HIZ         (0x00u)
#define VTHERM_2_DM_DIG_HIZ         (0x01u)
#define VTHERM_2_DM_RES_UP          (0x02u)
#define VTHERM_2_DM_RES_DWN         (0x03u)
#define VTHERM_2_DM_OD_LO           (0x04u)
#define VTHERM_2_DM_OD_HI           (0x05u)
#define VTHERM_2_DM_STRONG          (0x06u)
#define VTHERM_2_DM_RES_UPDWN       (0x07u)

/* Digital Port Constants */
#define VTHERM_2_MASK               VTHERM_2__MASK
#define VTHERM_2_SHIFT              VTHERM_2__SHIFT
#define VTHERM_2_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define VTHERM_2_PS                     (* (reg32 *) VTHERM_2__PS)
/* Port Configuration */
#define VTHERM_2_PC                     (* (reg32 *) VTHERM_2__PC)
/* Data Register */
#define VTHERM_2_DR                     (* (reg32 *) VTHERM_2__DR)
/* Input Buffer Disable Override */
#define VTHERM_2_INP_DIS                (* (reg32 *) VTHERM_2__PC2)


#if defined(VTHERM_2__INTSTAT)  /* Interrupt Registers */

    #define VTHERM_2_INTSTAT                (* (reg32 *) VTHERM_2__INTSTAT)

#endif /* Interrupt Registers */


/***************************************
* The following code is DEPRECATED and 
* must not be used.
***************************************/

#define VTHERM_2_DRIVE_MODE_SHIFT       (0x00u)
#define VTHERM_2_DRIVE_MODE_MASK        (0x07u << VTHERM_2_DRIVE_MODE_SHIFT)


#endif /* End Pins VTHERM_2_H */


/* [] END OF FILE */

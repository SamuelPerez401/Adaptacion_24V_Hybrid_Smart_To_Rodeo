/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC18F57Q43
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above
        MPLAB 	          :  MPLAB X 6.00	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set PWM_FCA aliases
#define PWM_FCA_TRIS                 TRISAbits.TRISA0
#define PWM_FCA_LAT                  LATAbits.LATA0
#define PWM_FCA_PORT                 PORTAbits.RA0
#define PWM_FCA_WPU                  WPUAbits.WPUA0
#define PWM_FCA_OD                   ODCONAbits.ODCA0
#define PWM_FCA_ANS                  ANSELAbits.ANSELA0
#define PWM_FCA_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define PWM_FCA_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define PWM_FCA_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define PWM_FCA_GetValue()           PORTAbits.RA0
#define PWM_FCA_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define PWM_FCA_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define PWM_FCA_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define PWM_FCA_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define PWM_FCA_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define PWM_FCA_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define PWM_FCA_SetAnalogMode()      do { ANSELAbits.ANSELA0 = 1; } while(0)
#define PWM_FCA_SetDigitalMode()     do { ANSELAbits.ANSELA0 = 0; } while(0)

// get/set PWM_FCC aliases
#define PWM_FCC_TRIS                 TRISAbits.TRISA1
#define PWM_FCC_LAT                  LATAbits.LATA1
#define PWM_FCC_PORT                 PORTAbits.RA1
#define PWM_FCC_WPU                  WPUAbits.WPUA1
#define PWM_FCC_OD                   ODCONAbits.ODCA1
#define PWM_FCC_ANS                  ANSELAbits.ANSELA1
#define PWM_FCC_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define PWM_FCC_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define PWM_FCC_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define PWM_FCC_GetValue()           PORTAbits.RA1
#define PWM_FCC_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define PWM_FCC_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define PWM_FCC_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define PWM_FCC_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define PWM_FCC_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define PWM_FCC_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define PWM_FCC_SetAnalogMode()      do { ANSELAbits.ANSELA1 = 1; } while(0)
#define PWM_FCC_SetDigitalMode()     do { ANSELAbits.ANSELA1 = 0; } while(0)

// get/set PP aliases
#define PP_TRIS                 TRISAbits.TRISA4
#define PP_LAT                  LATAbits.LATA4
#define PP_PORT                 PORTAbits.RA4
#define PP_WPU                  WPUAbits.WPUA4
#define PP_OD                   ODCONAbits.ODCA4
#define PP_ANS                  ANSELAbits.ANSELA4
#define PP_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define PP_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define PP_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define PP_GetValue()           PORTAbits.RA4
#define PP_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define PP_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define PP_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define PP_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define PP_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define PP_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define PP_SetAnalogMode()      do { ANSELAbits.ANSELA4 = 1; } while(0)
#define PP_SetDigitalMode()     do { ANSELAbits.ANSELA4 = 0; } while(0)

// get/set FT aliases
#define FT_TRIS                 TRISAbits.TRISA5
#define FT_LAT                  LATAbits.LATA5
#define FT_PORT                 PORTAbits.RA5
#define FT_WPU                  WPUAbits.WPUA5
#define FT_OD                   ODCONAbits.ODCA5
#define FT_ANS                  ANSELAbits.ANSELA5
#define FT_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define FT_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define FT_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define FT_GetValue()           PORTAbits.RA5
#define FT_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define FT_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define FT_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define FT_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define FT_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define FT_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define FT_SetAnalogMode()      do { ANSELAbits.ANSELA5 = 1; } while(0)
#define FT_SetDigitalMode()     do { ANSELAbits.ANSELA5 = 0; } while(0)

// get/set POT_TL1 aliases
#define POT_TL1_TRIS                 TRISCbits.TRISC1
#define POT_TL1_LAT                  LATCbits.LATC1
#define POT_TL1_PORT                 PORTCbits.RC1
#define POT_TL1_WPU                  WPUCbits.WPUC1
#define POT_TL1_OD                   ODCONCbits.ODCC1
#define POT_TL1_ANS                  ANSELCbits.ANSELC1
#define POT_TL1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define POT_TL1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define POT_TL1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define POT_TL1_GetValue()           PORTCbits.RC1
#define POT_TL1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define POT_TL1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define POT_TL1_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define POT_TL1_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define POT_TL1_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define POT_TL1_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define POT_TL1_SetAnalogMode()      do { ANSELCbits.ANSELC1 = 1; } while(0)
#define POT_TL1_SetDigitalMode()     do { ANSELCbits.ANSELC1 = 0; } while(0)

// get/set RC5 procedures
#define RC5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define RC5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define RC5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define RC5_GetValue()              PORTCbits.RC5
#define RC5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define RC5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define RC5_SetPullup()             do { WPUCbits.WPUC5 = 1; } while(0)
#define RC5_ResetPullup()           do { WPUCbits.WPUC5 = 0; } while(0)
#define RC5_SetAnalogMode()         do { ANSELCbits.ANSELC5 = 1; } while(0)
#define RC5_SetDigitalMode()        do { ANSELCbits.ANSELC5 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()              PORTCbits.RC6
#define RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define RC6_SetPullup()             do { WPUCbits.WPUC6 = 1; } while(0)
#define RC6_ResetPullup()           do { WPUCbits.WPUC6 = 0; } while(0)
#define RC6_SetAnalogMode()         do { ANSELCbits.ANSELC6 = 1; } while(0)
#define RC6_SetDigitalMode()        do { ANSELCbits.ANSELC6 = 0; } while(0)

// get/set POT_PWM_AP aliases
#define POT_PWM_AP_TRIS                 TRISCbits.TRISC7
#define POT_PWM_AP_LAT                  LATCbits.LATC7
#define POT_PWM_AP_PORT                 PORTCbits.RC7
#define POT_PWM_AP_WPU                  WPUCbits.WPUC7
#define POT_PWM_AP_OD                   ODCONCbits.ODCC7
#define POT_PWM_AP_ANS                  ANSELCbits.ANSELC7
#define POT_PWM_AP_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define POT_PWM_AP_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define POT_PWM_AP_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define POT_PWM_AP_GetValue()           PORTCbits.RC7
#define POT_PWM_AP_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define POT_PWM_AP_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define POT_PWM_AP_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define POT_PWM_AP_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define POT_PWM_AP_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define POT_PWM_AP_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define POT_PWM_AP_SetAnalogMode()      do { ANSELCbits.ANSELC7 = 1; } while(0)
#define POT_PWM_AP_SetDigitalMode()     do { ANSELCbits.ANSELC7 = 0; } while(0)

// get/set ACS712_1 aliases
#define ACS712_1_TRIS                 TRISDbits.TRISD0
#define ACS712_1_LAT                  LATDbits.LATD0
#define ACS712_1_PORT                 PORTDbits.RD0
#define ACS712_1_WPU                  WPUDbits.WPUD0
#define ACS712_1_OD                   ODCONDbits.ODCD0
#define ACS712_1_ANS                  ANSELDbits.ANSELD0
#define ACS712_1_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define ACS712_1_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define ACS712_1_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define ACS712_1_GetValue()           PORTDbits.RD0
#define ACS712_1_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define ACS712_1_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define ACS712_1_SetPullup()          do { WPUDbits.WPUD0 = 1; } while(0)
#define ACS712_1_ResetPullup()        do { WPUDbits.WPUD0 = 0; } while(0)
#define ACS712_1_SetPushPull()        do { ODCONDbits.ODCD0 = 0; } while(0)
#define ACS712_1_SetOpenDrain()       do { ODCONDbits.ODCD0 = 1; } while(0)
#define ACS712_1_SetAnalogMode()      do { ANSELDbits.ANSELD0 = 1; } while(0)
#define ACS712_1_SetDigitalMode()     do { ANSELDbits.ANSELD0 = 0; } while(0)

// get/set POT_PWM_CL aliases
#define POT_PWM_CL_TRIS                 TRISDbits.TRISD4
#define POT_PWM_CL_LAT                  LATDbits.LATD4
#define POT_PWM_CL_PORT                 PORTDbits.RD4
#define POT_PWM_CL_WPU                  WPUDbits.WPUD4
#define POT_PWM_CL_OD                   ODCONDbits.ODCD4
#define POT_PWM_CL_ANS                  ANSELDbits.ANSELD4
#define POT_PWM_CL_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define POT_PWM_CL_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define POT_PWM_CL_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define POT_PWM_CL_GetValue()           PORTDbits.RD4
#define POT_PWM_CL_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define POT_PWM_CL_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define POT_PWM_CL_SetPullup()          do { WPUDbits.WPUD4 = 1; } while(0)
#define POT_PWM_CL_ResetPullup()        do { WPUDbits.WPUD4 = 0; } while(0)
#define POT_PWM_CL_SetPushPull()        do { ODCONDbits.ODCD4 = 0; } while(0)
#define POT_PWM_CL_SetOpenDrain()       do { ODCONDbits.ODCD4 = 1; } while(0)
#define POT_PWM_CL_SetAnalogMode()      do { ANSELDbits.ANSELD4 = 1; } while(0)
#define POT_PWM_CL_SetDigitalMode()     do { ANSELDbits.ANSELD4 = 0; } while(0)

// get/set PRG aliases
#define PRG_TRIS                 TRISEbits.TRISE0
#define PRG_LAT                  LATEbits.LATE0
#define PRG_PORT                 PORTEbits.RE0
#define PRG_WPU                  WPUEbits.WPUE0
#define PRG_OD                   ODCONEbits.ODCE0
#define PRG_ANS                  ANSELEbits.ANSELE0
#define PRG_SetHigh()            do { LATEbits.LATE0 = 1; } while(0)
#define PRG_SetLow()             do { LATEbits.LATE0 = 0; } while(0)
#define PRG_Toggle()             do { LATEbits.LATE0 = ~LATEbits.LATE0; } while(0)
#define PRG_GetValue()           PORTEbits.RE0
#define PRG_SetDigitalInput()    do { TRISEbits.TRISE0 = 1; } while(0)
#define PRG_SetDigitalOutput()   do { TRISEbits.TRISE0 = 0; } while(0)
#define PRG_SetPullup()          do { WPUEbits.WPUE0 = 1; } while(0)
#define PRG_ResetPullup()        do { WPUEbits.WPUE0 = 0; } while(0)
#define PRG_SetPushPull()        do { ODCONEbits.ODCE0 = 0; } while(0)
#define PRG_SetOpenDrain()       do { ODCONEbits.ODCE0 = 1; } while(0)
#define PRG_SetAnalogMode()      do { ANSELEbits.ANSELE0 = 1; } while(0)
#define PRG_SetDigitalMode()     do { ANSELEbits.ANSELE0 = 0; } while(0)

// get/set FCC aliases
#define FCC_TRIS                 TRISEbits.TRISE1
#define FCC_LAT                  LATEbits.LATE1
#define FCC_PORT                 PORTEbits.RE1
#define FCC_WPU                  WPUEbits.WPUE1
#define FCC_OD                   ODCONEbits.ODCE1
#define FCC_ANS                  ANSELEbits.ANSELE1
#define FCC_SetHigh()            do { LATEbits.LATE1 = 1; } while(0)
#define FCC_SetLow()             do { LATEbits.LATE1 = 0; } while(0)
#define FCC_Toggle()             do { LATEbits.LATE1 = ~LATEbits.LATE1; } while(0)
#define FCC_GetValue()           PORTEbits.RE1
#define FCC_SetDigitalInput()    do { TRISEbits.TRISE1 = 1; } while(0)
#define FCC_SetDigitalOutput()   do { TRISEbits.TRISE1 = 0; } while(0)
#define FCC_SetPullup()          do { WPUEbits.WPUE1 = 1; } while(0)
#define FCC_ResetPullup()        do { WPUEbits.WPUE1 = 0; } while(0)
#define FCC_SetPushPull()        do { ODCONEbits.ODCE1 = 0; } while(0)
#define FCC_SetOpenDrain()       do { ODCONEbits.ODCE1 = 1; } while(0)
#define FCC_SetAnalogMode()      do { ANSELEbits.ANSELE1 = 1; } while(0)
#define FCC_SetDigitalMode()     do { ANSELEbits.ANSELE1 = 0; } while(0)

// get/set FCA aliases
#define FCA_TRIS                 TRISEbits.TRISE2
#define FCA_LAT                  LATEbits.LATE2
#define FCA_PORT                 PORTEbits.RE2
#define FCA_WPU                  WPUEbits.WPUE2
#define FCA_OD                   ODCONEbits.ODCE2
#define FCA_ANS                  ANSELEbits.ANSELE2
#define FCA_SetHigh()            do { LATEbits.LATE2 = 1; } while(0)
#define FCA_SetLow()             do { LATEbits.LATE2 = 0; } while(0)
#define FCA_Toggle()             do { LATEbits.LATE2 = ~LATEbits.LATE2; } while(0)
#define FCA_GetValue()           PORTEbits.RE2
#define FCA_SetDigitalInput()    do { TRISEbits.TRISE2 = 1; } while(0)
#define FCA_SetDigitalOutput()   do { TRISEbits.TRISE2 = 0; } while(0)
#define FCA_SetPullup()          do { WPUEbits.WPUE2 = 1; } while(0)
#define FCA_ResetPullup()        do { WPUEbits.WPUE2 = 0; } while(0)
#define FCA_SetPushPull()        do { ODCONEbits.ODCE2 = 0; } while(0)
#define FCA_SetOpenDrain()       do { ODCONEbits.ODCE2 = 1; } while(0)
#define FCA_SetAnalogMode()      do { ANSELEbits.ANSELE2 = 1; } while(0)
#define FCA_SetDigitalMode()     do { ANSELEbits.ANSELE2 = 0; } while(0)

// get/set POT_AMP1 aliases
#define POT_AMP1_TRIS                 TRISFbits.TRISF1
#define POT_AMP1_LAT                  LATFbits.LATF1
#define POT_AMP1_PORT                 PORTFbits.RF1
#define POT_AMP1_WPU                  WPUFbits.WPUF1
#define POT_AMP1_OD                   ODCONFbits.ODCF1
#define POT_AMP1_ANS                  ANSELFbits.ANSELF1
#define POT_AMP1_SetHigh()            do { LATFbits.LATF1 = 1; } while(0)
#define POT_AMP1_SetLow()             do { LATFbits.LATF1 = 0; } while(0)
#define POT_AMP1_Toggle()             do { LATFbits.LATF1 = ~LATFbits.LATF1; } while(0)
#define POT_AMP1_GetValue()           PORTFbits.RF1
#define POT_AMP1_SetDigitalInput()    do { TRISFbits.TRISF1 = 1; } while(0)
#define POT_AMP1_SetDigitalOutput()   do { TRISFbits.TRISF1 = 0; } while(0)
#define POT_AMP1_SetPullup()          do { WPUFbits.WPUF1 = 1; } while(0)
#define POT_AMP1_ResetPullup()        do { WPUFbits.WPUF1 = 0; } while(0)
#define POT_AMP1_SetPushPull()        do { ODCONFbits.ODCF1 = 0; } while(0)
#define POT_AMP1_SetOpenDrain()       do { ODCONFbits.ODCF1 = 1; } while(0)
#define POT_AMP1_SetAnalogMode()      do { ANSELFbits.ANSELF1 = 1; } while(0)
#define POT_AMP1_SetDigitalMode()     do { ANSELFbits.ANSELF1 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/
/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC18F57Q43
        Driver Version    :  2.00
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

#include "mcc_generated_files/mcc.h"
#include "Variables_Globales.h"

/*
                         Main application
 */
void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();
    
    fade_in_pwm_opening(200, 1);
    fade_out_pwm_opening(PWM_APAGADO, 1);
    fade_in_pwm_closing(200, 1);
    fade_out_pwm_closing(PWM_APAGADO, 1);

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();
    
    while(!first_boot){
        
        if(FCC_PORT){
            
            PWM_POT_CL_Value = ADCC_GetSingleConversion(POT_PWM_CL);
            PWM_POT_CL_Result = (PWM_POT_CL_Value * (PWM_MAX / 4095.0));
            PWM_POT_CL_Result = (PWM_POT_CL_Result + PWM_MIN);
            
            __delay_ms(500);
            
            fade_in_pwm_closing(PWM_POT_CL_Result, 1);
            
        }else{
            
            fade_out_pwm_closing(PWM_APAGADO, 1);
            first_boot = 1;
        }
    }

    while (first_boot)
    {
        CierreAutomatico();
        PWM();
        Amperimetro();
        
        if((PP_PORT || PRG_PORT) && !EB){
            
            B = 1;
            EB = 1;
            
        }else if(!PP_PORT && !PRG_PORT){
            
            EB = 0;
            B = 0;
        }
        
        if(PWM_FCA_PORT && !EPWM_FCA){
            
            fade_out_ap =~ fade_out_ap;
            EPWM_FCA = 1;
            
        }else if(!PWM_FCA_PORT){
            
            EPWM_FCA = 0;
        }
        
        if(PWM_FCC_PORT && !EPWM_FCC){
            
            fade_out_cl =~ fade_out_cl;
            EPWM_FCC = 1;
            
        }else if(!PWM_FCC_PORT){
            
            EPWM_FCC = 0;
        }
    
        if(PWM1S1P1 == PWM_APAGADO && PWM1S1P2 == PWM_APAGADO && !TCA_Enable && B)
        {

            Apertura();
            B = 0;
            NOP();
        }

        if(PWM1S1P2 > PWM_APAGADO && FCA_PORT && B)
        {

            CambioGiroCierre();
            B = 0;
            NOP();

        }else if(PWM1S1P2 > PWM_APAGADO && !FCA_PORT && B){

            B = 0;
            fade_out_pwm_closing(PWM_APAGADO, 1);
            TCA_Enable = 1;
            NOP();
        }

        if(PWM1S1P1 > PWM_APAGADO && B){

            B = 0;
            NOP();
        }

        if(PWM1S1P1 > PWM_APAGADO && !FCA_PORT)
        {

            ApagarApertura();
            NOP();
        }

        if(PWM1S1P2 > PWM_APAGADO && !FCC_PORT)
        {

            ApagarCierre();
            NOP();
        }

        if(TCA_Enable && B)
        {

            TCA_Timer = 0;
            B = 0;
            NOP();
        }

        if(PWM1S1P2 > PWM_APAGADO && !FT_PORT && FCA_PORT)
        {

            CambioGiroCierre();
            NOP();

        }else if(PWM1S1P2 > PWM_APAGADO && !FCA_PORT && !FT_PORT){

            ApagarCierre();
            TCA_Enable = 1;
            NOP();
        }
        
        if(TCA_Enable && !FT_PORT){
            
            TCA_Timer = 0;
        }

        if(!TCA_Enable && !FCA_PORT && B)
        {

            TCA_Enable = 1;
            B = 0;
            NOP();
        }
        
    }

}
/**
 End of File
*/
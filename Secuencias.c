
#include "Variables_Globales.h"

void Apertura(){
    
    fade_in_pwm_opening(PWM_POT_Result, 1);
    
}

void Cierre(){
    
    fade_in_pwm_closing(PWM_POT_Result, 1);
    TCA_Timer = 0;
    TCA_Enable = 0;
    
}

void CambioGiroCierre(){
    
    if(!fade_out_ap){
        
        fade_out_pwm_closing(PWM_APAGADO, 1);
        fade_in_pwm_opening(PWM_POT_Result, 1);
        
    }else{
        
        fade_out_pwm_closing(PWM_APAGADO, 1);
        fade_in_pwm_opening(PWM_POT_AP_Result, 1);
    }
    
}

void ApagarApertura(){
    
    fade_out_pwm_opening(PWM_APAGADO, 1);
    TCA_Enable = 1;
    fade_out_cl = 0;
    
}

void ApagarCierre(){
    
    fade_out_pwm_closing(PWM_APAGADO, 1);
    fade_out_ap = 0;
    
}
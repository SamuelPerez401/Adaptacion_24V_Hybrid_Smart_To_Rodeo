
#include "Variables_Globales.h"

void PWM(){
    
    PWM_POT_Value = ADCC_GetSingleConversion(POT_TL1);
    //PWM_POT_Result = (PWM_POT_Value * (PWM_ENCENDIDO / 4095.0));
    //PWM1_16BIT_SetSlice1Output1DutyCycleRegister(PWM_POT_Result);
    //PWM1CONbits.LD = 1;
    PWM_POT_Result = (PWM_POT_Value * (PWM_ENCENDIDO_MAX / 4095.0));
    PWM_POT_Result = (PWM_POT_Result + PWM_ENCENDIDO_MIN);
    
    PWM_POT_AP_Value = ADCC_GetSingleConversion(POT_PWM_AP);
    PWM_POT_AP_Result = (PWM_POT_AP_Value * (PWM_MAX / 4095.0));
    PWM_POT_AP_Result = (PWM_POT_AP_Result + PWM_MIN);
    
    PWM_POT_CL_Value = ADCC_GetSingleConversion(POT_PWM_CL);
    PWM_POT_CL_Result = (PWM_POT_CL_Value * (PWM_MAX / 4095.0));
    PWM_POT_CL_Result = (PWM_POT_CL_Result + PWM_MIN);
    
    if(PWM1S1P1 > PWM_APAGADO && PWM1S1P2 == PWM_APAGADO && !fade_out_ap){
        
        if(PWM_POT_Result > PWM1S1P1){
            
            fade_in_pwm_opening(PWM_POT_Result, 1);
            
        }else if(PWM_POT_Result < PWM1S1P1){
            
            fade_out_pwm_opening(PWM_POT_Result, 1);
        }
        
    }else if(PWM1S1P2 > PWM_APAGADO && PWM1S1P1 == PWM_APAGADO && !fade_out_cl){
        
        if(PWM_POT_Result > PWM1S1P2){
            
            fade_in_pwm_closing(PWM_POT_Result, 1);
            
        }else if(PWM_POT_Result < PWM1S1P2){
            
            fade_out_pwm_closing(PWM_POT_Result, 1);
        }
    }
    
    if(PWM1S1P1 > PWM_APAGADO && fade_out_ap){
        
        if(PWM_POT_AP_Result > PWM1S1P1){
            
            fade_in_pwm_opening(PWM_POT_AP_Result, 1);
            
        }else if(PWM_POT_AP_Result < PWM1S1P1){
            
            fade_out_pwm_opening(PWM_POT_AP_Result, 1);
        }
        
    }else if(PWM1S1P2 > PWM_APAGADO && fade_out_cl){
        
        if(PWM_POT_CL_Result > PWM1S1P2){
            
            fade_in_pwm_closing(PWM_POT_CL_Result, 1);
            
        }else if(PWM_POT_CL_Result < PWM1S1P2){
            
            fade_out_pwm_closing(PWM_POT_CL_Result, 1);
        }
    }
    
}

void fade_in_pwm_opening(uint16_t target_pwm, uint16_t increment){
    
    unsigned short current_pwm = PWM1S1P1;
    
    while(current_pwm < target_pwm){
    
        current_pwm += increment;
        PWM1_16BIT_SetSlice1Output1DutyCycleRegister(current_pwm);
        PWM1CONbits.LD = 1;
        __delay_us(200);
    
    }
    
}

void fade_out_pwm_opening(uint16_t target_pwm, uint16_t increment){
    
    unsigned short current_pwm = PWM1S1P1;
    
    while(current_pwm > target_pwm){
    
        current_pwm -= increment;
        PWM1_16BIT_SetSlice1Output1DutyCycleRegister(current_pwm);
        PWM1CONbits.LD = 1;
        __delay_us(200);
    
    }
    
}

void fade_in_pwm_closing(uint16_t target_pwm, uint16_t increment){
    
    unsigned short current_pwm = PWM1S1P2;
    
    while(current_pwm < target_pwm){
    
        current_pwm += increment;
        PWM1_16BIT_SetSlice1Output2DutyCycleRegister(current_pwm);
        PWM1CONbits.LD = 1;
        __delay_us(200);
        
    }
    
}

void fade_out_pwm_closing(uint16_t target_pwm, uint16_t increment){
    
    unsigned short current_pwm = PWM1S1P2;
    
    while(current_pwm > target_pwm){
    
        current_pwm -= increment;
        PWM1_16BIT_SetSlice1Output2DutyCycleRegister(current_pwm);
        PWM1CONbits.LD = 1;
        __delay_us(200);
    
    }
    
}


#include "Variables_Globales.h"

void Amperimetro(){
    
    AMP_POT_Value = ADCC_GetSingleConversion(POT_AMP1);
    AMP_POT_Result = (AMP_POT_Value * (20.0 / 4095.0));
    
    ACS712_Value = ADCC_GetSingleConversion(ACS712_1);
    ACS712_Result = (ACS712_Value * (3.3 / 4095.0));
    ACS712_Result = (ACS712_Result - 1.65) / 0.100;
    
    if(ACS712_Result > AMP_POT_Result){
        
        if(PWM1S1P1 > PWM_APAGADO){
            
            ApagarApertura();
            
        }
        
        if(PWM1S1P2 > PWM_APAGADO){
            
            CambioGiroCierre();
        }
    }
}

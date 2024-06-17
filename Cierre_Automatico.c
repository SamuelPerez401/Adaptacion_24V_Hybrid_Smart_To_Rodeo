
#include "Variables_Globales.h"

void CierreAutomatico(){
   
    if(TCA_Enable){
        
        TMR0_StartTimer();
        
        if(TMR0_HasOverflowOccured()){
        
            TMR0IF = 0;
            TMR0_Reload();
            TCA_Timer += 1;
        
        }
        
        if(TCA_Timer >= TCA){
        
            Cierre();
            TMR0_StopTimer();
        }
    }    
    
}

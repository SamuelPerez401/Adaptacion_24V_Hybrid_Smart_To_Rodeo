/* 
 * File:   Variables_Globales.h
 * Author: Admin
 *
 * Created on June 6, 2024, 11:18 PM
 */

#ifndef VARIABLES_GLOBALES_H
#define	VARIABLES_GLOBALES_H

#include "mcc_generated_files/mcc.h"
#include "Secuencias.h"


// Velocidad maxima desde un 50% a un 100%
// Velocidad minima desde un 15% a un 40%

// 1% = 26 PWM1S1P1
// 50% = 1300 PWM1S1P1
// 15% = 390 PWM1S1P1
// 40% = 1035 PWM1S1P1
// 100% = 2580 PWM1S1P1 

#define PWM_ENCENDIDO 2580
#define PWM_ENCENDIDO_MAX 1670 // Se suma al pwm encendido min para dar un 100% de duty
#define PWM_ENCENDIDO_MIN 910 // PWM encendido al minimo con un 35% de duty
#define PWM_APAGADO 0
#define PWM_MIN 260 // PWM al 10%
#define PWM_MAX 520 // Se le suma al pwm minimo dando un total de 520 al registro PWM1S1P1 Y PWM1S1P2 dando un total del 30%
#define TCA 3000

bool first_boot = 0;
bool EB = 0;
bool B = 0;
bool TCA_Enable = 0;
bool fade_out_ap = 0;
bool fade_out_cl = 0;
bool EPWM_FCA = 0;
bool EPWM_FCC = 0;


uint16_t TCA_Timer;
uint16_t PWM_POT_Value;
uint16_t PWM_POT_Result;
uint16_t PWM_POT_AP_Value;
uint16_t PWM_POT_AP_Result;
uint16_t PWM_POT_CL_Value;
uint16_t PWM_POT_CL_Result;

float TL_POT_Result;
uint16_t TL_POT_Value;
float AMP_POT_Result;
uint16_t AMP_POT_Value;
float ACS712_Result;
uint16_t ACS712_Value;


void Amperimetro();
void CierreAutomatico();
void PWM();
void fade_in_pwm_opening(uint16_t target_pwm, uint16_t increment);
void fade_out_pwm_opening(uint16_t target_pwm, uint16_t increment);
void fade_in_pwm_closing(uint16_t target_pwm, uint16_t increment);
void fade_out_pwm_closing(uint16_t target_pwm, uint16_t increment);


#endif	/* VARIABLES_GLOBALES_H */


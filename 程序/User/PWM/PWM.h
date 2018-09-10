#ifndef _PWM_H
#define _PWM_H

#include "stm32f10x.h"

void PWM_Config(u16 arr,u16 psc);
void PWM1_Set(__IO u32 value);
void PWM2_Set(__IO u32 value);

#endif

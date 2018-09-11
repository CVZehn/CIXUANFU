/**
  ******************************************************************************
  * @file    main.c
  * @author  Zehn
  * @version V1.0
  * @date    2013-xx-xx
  * @brief  
  ******************************************************************************
  * @attention
  *
  *
  ******************************************************************************
  */ 
	
#include "stm32f10x.h"
#include "bsp_led.h"
#include "PWM.h"
#include "Magnet_control.h" 
#include "adc.h"  
#include "usart.h"
#include "delay.h"	
#include "timer.h"
#include "PID.h"


#define SOFT_DELAY Delay(0x0FFFFF);

void Delay(__IO u32 nCount); 

/**
  * @brief  主函数
  * @param  无  
  * @retval 无
  */
int main(void)
{	
	delay_init();	    	 //延时函数初始化	  
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);//设置中断优先级分组为组2：2位抢占优先级，2位响应优先级
	uart_init(115200);	 	//串口初始化为115200
 	Adc_Init();		  		//ADC初始化
    TIM3_Int_Init(72-1,50000);
	LED_GPIO_Config();	
    MAGNET_GPIO_Config(); 
 	PWM_Config(899,0);	 //不分频。PWM频率=72000000/900=80Khz
    

		GPIO_SetBits(GPIOB,GPIO_Pin_3);
		GPIO_SetBits(GPIOB,GPIO_Pin_9);	 
		TIM_SetCompare2(TIM2,100);						 
		TIM_SetCompare4(TIM4,100);		
        MAGNET_left;MAGNET_up;
    
//    pid.Kp=500;
//    pid.Ki=0;
//    pid.Kd=20;
//		
	while (1)
	{
		GPIO_SetBits(GPIOB,GPIO_Pin_0);
		GPIO_SetBits(GPIOB,GPIO_Pin_1);
		GPIO_SetBits(GPIOB,GPIO_Pin_10);
        printf("0:%d\r\n",adc1);
        printf("1:%d\r\n",adc2);
        Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);
        Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);
        Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);
        Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);
		GPIO_ResetBits(GPIOB,GPIO_Pin_0);
        Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);
        Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);
        Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);
        Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);
		GPIO_ResetBits(GPIOB,GPIO_Pin_1);
        Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);
        Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);
        Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);
        Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);
		GPIO_ResetBits(GPIOB,GPIO_Pin_10);
        Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);
        Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);
        Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);
        Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);Delay(0xffff);
	}
}

void Delay(__IO uint32_t nCount)	 //简单的延时函数
{
	for(; nCount != 0; nCount--);
}


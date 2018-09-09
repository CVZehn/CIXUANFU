/**
  ******************************************************************************
  * @file    main.c
  * @author  fire
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   测试led
  ******************************************************************************
  * @attention
  *
  * 实验平台:秉火 F103-指南者 STM32 开发板 
  * 论坛    :http://www.firebbs.cn
  * 淘宝    :https://fire-stm32.taobao.com
  *
  ******************************************************************************
  */ 
	
#include "stm32f10x.h"
#include "bsp_led.h"
#include "PWM.h"
#include "Magnet_control.h"   

#define SOFT_DELAY Delay(0x0FFFFF);

void Delay(__IO u32 nCount); 

/**
  * @brief  主函数
  * @param  无  
  * @retval 无
  */
int main(void)
{	
	/* LED 端口初始化 */
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); //设置NVIC中断分组2:2位抢占优先级，2位响应优先级
	LED_GPIO_Config();	
    MAGNET_GPIO_Config(); 
 	PWM_Config(899,0);	 //不分频。PWM频率=72000000/900=80Khz
    
  
//        GPIO_PinRemapConfig(GPIO_Remap_SWJ_JTAGDisable, ENABLE);

		GPIO_SetBits(GPIOB,GPIO_Pin_3);
		GPIO_SetBits(GPIOB,GPIO_Pin_9);
//		GPIO_SetBits(GPIOB,GPIO_Pin_3);         
//		GPIO_SetBits(GPIOB,GPIO_Pin_4);
//		GPIO_ResetBits(GPIOB,GPIO_Pin_5);
//		GPIO_SetBits(GPIOB,GPIO_Pin_6);
//		GPIO_SetBits(GPIOB,GPIO_Pin_7);
//		GPIO_SetBits(GPIOB,GPIO_Pin_8);
//		GPIO_SetBits(GPIOB,GPIO_Pin_9);				 
		TIM_SetCompare2(TIM2,400);						 
		TIM_SetCompare4(TIM4,400);		

	while (1)
	{
		GPIO_SetBits(GPIOB,GPIO_Pin_0);
		GPIO_SetBits(GPIOB,GPIO_Pin_1);
		GPIO_SetBits(GPIOB,GPIO_Pin_10);
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
/*********************************************END OF FILE**********************/

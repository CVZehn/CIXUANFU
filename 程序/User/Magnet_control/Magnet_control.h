#ifndef __MAGNET_CONTROL_H
#define	__MAGNET_CONTROL_H


#include "stm32f10x.h"



#define MAG1_GPIO_PORT    	GPIOB			              /* GPIO端口 */
#define MAG1_GPIO_CLK 	    RCC_APB2Periph_GPIOB		/* GPIO端口时钟 */
#define MAG1_GPIO_PIN		GPIO_Pin_4		        /* 连接到SCL时钟线的GPIO */

#define MAG2_GPIO_PORT    	GPIOB			              /* GPIO端口 */
#define MAG2_GPIO_CLK 	    RCC_APB2Periph_GPIOB		/* GPIO端口时钟 */
#define MAG2_GPIO_PIN		GPIO_Pin_5		        /* 连接到SCL时钟线的GPIO */

#define MAG3_GPIO_PORT    	GPIOB		              /* GPIO端口 */
#define MAG3_GPIO_CLK 	    RCC_APB2Periph_GPIOC		/* GPIO端口时钟 */
#define MAG3_GPIO_PIN		GPIO_Pin_7		        /* 连接到SCL时钟线的GPIO */

#define MAG4_GPIO_PORT    	GPIOB		              /* GPIO端口 */
#define MAG4_GPIO_CLK 	    RCC_APB2Periph_GPIOC		/* GPIO端口时钟 */
#define MAG4_GPIO_PIN		GPIO_Pin_8	        /* 连接到SCL时钟线的GPIO */


/* 使用标准的固件库控制IO*/
#define MAGNET_left     GPIO_ResetBits(MAG2_GPIO_PORT,MAG2_GPIO_PIN);GPIO_SetBits(MAG1_GPIO_PORT,MAG1_GPIO_PIN)

#define MAGNET_right    GPIO_ResetBits(MAG2_GPIO_PORT,MAG1_GPIO_PIN);GPIO_SetBits(MAG1_GPIO_PORT,MAG2_GPIO_PIN)

#define MAGNET_up       GPIO_ResetBits(MAG4_GPIO_PORT,MAG4_GPIO_PIN);GPIO_SetBits(MAG3_GPIO_PORT,MAG3_GPIO_PIN)

#define MAGNET_down       GPIO_ResetBits(MAG3_GPIO_PORT,MAG3_GPIO_PIN);GPIO_SetBits(MAG4_GPIO_PORT,MAG4_GPIO_PIN)



void MAGNET_GPIO_Config(void);

#endif /* __LED_H */

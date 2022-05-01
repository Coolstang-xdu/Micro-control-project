#ifndef __MY_DELAY__
#define __MY_DELAY__
//#include "sys.h"
#include <stdint.h>
#include "stm32l4xx.h"
#include "stm32l4xx_hal_gpio.h"
//////////////////////////////////////////////////////////////////////////////////	 
//������ֻ��ѧϰʹ�ã�δ��������ɣ��������������κ���;
//Mini STM32������
//IIC ��������	   
//����ԭ��@ALIENTEK
//������̳:www.openedv.com
//�޸�����:2010/6/10 
//�汾��V1.0
//��Ȩ���У�����ؾ���
//Copyright(C) ����ԭ�� 2009-2019
//All rights reserved
////////////////////////////////////////////////////////////////////////////////// 	  
//#define GPIO_PIN_11                ((uint16_t)0x0800)  /* Pin 11 selected   */
//#define GPIO_PIN_12                ((uint16_t)0x1000)  /* Pin 12 selected   */
   	   		   
//IO��������


//IO��������	 

#define u8 uint8_t
#define u16 uint16_t

//IIC���в�������
//void IIC_Init(void);                //��ʼ��IIC��IO��				 
void IIC_Start(void);				//����IIC��ʼ�ź�
void IIC_Stop(void);	  			//����IICֹͣ�ź�
void IIC_Send_Byte(uint8_t txd);			//IIC����һ���ֽ�
uint8_t IIC_Read_Byte(unsigned char ack);//IIC��ȡһ���ֽ�
uint8_t IIC_Wait_Ack(void); 				//IIC�ȴ�ACK�ź�
void IIC_Ack(void);					//IIC����ACK�ź�
void IIC_NAck(void);				//IIC������ACK�ź�
static void IIC_Dev_Write_Bytes(u8 devaddr,u8 addr,u8 len,u8 *wbuf);
static void IIC_Dev_Write_Byte(u8 devaddr,u8 addr,u8 data);
static void IIC_Dev_Read_Bytes(u8 devaddr,u8 addr,u8 len,u8 *rbuf);
static u8 IIC_Dev_Read_Byte(u8 devaddr,u8 addr);
//�������е�SysTick���ã���ȡ�����ж��ӳ�
void delay_us(uint32_t udelay);

//�������е�SysTick���ã���ȡ�����ж��ӳ�
void delay_ms(uint32_t udelay);




#endif


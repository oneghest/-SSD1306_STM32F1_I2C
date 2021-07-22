#include "delay.h"
#include "key.h"
#include "sys.h"
#include "usart.h"	 
#include "oled.h"


int main(void)
{	
	delay_init();	  //延时函数初始化	  
	uart_init(115200);//串口初始化为115200
	OLED_Init()	;
	OLED_Clear();
	while(1)
	{		
//		u8 i;
//		for(i=0;i<2;i++)
//		{
//			OLED_Set_Pos(0,0);
//			oled_printf("english");
//			delay_ms(100);
//			OLED_Clear ();
//		}
		delay_ms(100);
		display();
	}
}



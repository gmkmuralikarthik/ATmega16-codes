

#include <avr/io.h>
#include <util/delay.h>
int main(void)
{
	DDRB=0;
   char led_1[4]={PA0,PA1,PA2,PA3};
	   char led_2[4]={PA4,PA5,PA6,PA7};
	  int i=2,j=1;
	  led_1[i];
	  PORTB=0;
	
	 while(1)
	 {
		  DDRA=(1<<led_1[i])|(1<<led_2[j]);
		 PORTA=(1<<led_1[i])|(0<<led_2[j]);
		 
		 
		while(!(PINB & (1<<PINB0)))
		{
			DDRA=(1<<led_1[i])|(1<<led_2[j]);
			PORTA=(1<<led_1[i])|(0<<led_2[j]);
			_delay_ms(500);
			
		
		i-=1;	
		}
		while(!(PINB & (1<<PINB1)))
		{
			DDRA=(1<<led_1[i])|(1<<led_2[j]);
			PORTA=(1<<led_1[i])|(0<<led_2[j]);
			_delay_ms(500);
			
			j-=1;
			
		}

		while(!(PINB & (1<<PINB2)))
		{
			DDRA=(1<<led_1[i])|(1<<led_2[j]);
			PORTA=(1<<led_1[i])|(0<<led_2[j]);
			_delay_ms(500);
			
			i+=1;
			
		}
		while(!(PINB & (1<<PINB3)))
		{
		
			DDRA=(1<<led_1[i])|(1<<led_2[j]);
			PORTA=(1<<led_1[i])|(0<<led_2[j]);
			_delay_ms(500);
			
			j-=1;
			
		}
    }
}
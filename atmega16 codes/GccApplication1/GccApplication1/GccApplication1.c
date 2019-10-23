/*
 * GccApplication1.c
 *
 * Created: 12/2/2017 9:42:35 PM
 *  Author: C.RONALDO.7
 */ 


#include <avr/io.h>
#define F_CPU 16000000UL
#include<util/delay.h>

int main(void)
{
    while(1)
    {
        //TODO:: Please write your application code '
		
		DDRB=0b11111111;
		PORTB=0b00000011;
		_delay_ms(2000);
		PORTB=0b00000000;
    }
	
}
 while(PB0==0)
 {
	 i-=1;
	 DDRA=(1<<led_1[i])|(1<<led_2[j]);
	 PORTA=(1<<led_1[i])|(0<<led_2[j]);
	 _delay_us(500);
	 
	 
 }
 while(PB1==0)
 {
	 j-=1;
	 DDRA=(1<<led_1[i])|(1<<led_2[j]);
	 PORTA=(1<<led_1[i])|(0<<led_2[j]);
	 _delay_us(500);
	 
	 
 }
 while(PB2==0)
 {
	 i+=1;
	 DDRA=(1<<led_1[i])|(1<<led_2[j]);
	 PORTA=(1<<led_1[i])|(0<<led_2[j]);
	 _delay_us(500);
	 
	 
 }
 while(PB3==0)
 {
	 j-=1;
	 DDRA=(1<<led_1[i])|(1<<led_2[j]);
	 PORTA=(1<<led_1[i])|(0<<led_2[j]);
	 _delay_us(500);
	 
	 
 }
 
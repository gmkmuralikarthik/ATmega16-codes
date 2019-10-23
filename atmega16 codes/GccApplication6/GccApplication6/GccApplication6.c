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
	
    for(int i=0;i<4;i++)
    {
        //TODO:: Please write your application code '
		
		DDRB=0b11111111;
		PORTB=0b00000011;
		_delay_ms(1000);
		PORTB=0b00000000;
		_delay_ms(1000);
    }
	
}
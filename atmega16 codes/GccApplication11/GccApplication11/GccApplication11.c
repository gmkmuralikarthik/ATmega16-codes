/*
 * GccApplication11.c
 *
 * Created: 12/4/2017 2:20:16 PM
 *  Author: C.RONALDO.7
 */ 


#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>


int main(void)
{DDRD=(1<<0);
	PORTD|=(1<<0);
	GICR=(1<<INT2);
	MCUCSR|=(1<<ISC2);
	sei();
    while(1)
    {
       
    }
}
	ISR(INT2_vect)
	{
		PORTD=0;
		_delay_ms(1000);
		PORTD|=(1<<0);
	}

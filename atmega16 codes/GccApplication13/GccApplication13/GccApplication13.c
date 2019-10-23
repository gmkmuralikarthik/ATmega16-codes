/*
 * GccApplication13.c
 *
 * Created: 12/4/2017 9:36:45 PM
 *  Author: C.RONALDO.7
 */ 


#include <avr/io.h>
#define F_CPU 16000000L
#include <avr/interrupt.h>
#include <util/delay.h>
ISR(TIMER0_OVF_vect)
{
	PORTB=(1<<PB0);
	_delay_ms(1000);
	PORTB=0;
}	
int main(void)
{int a=0;
	DDRB=(1<<PB0);
    while(1)
    {
        TCCR0|=(1<<2)|(1<<0);
		TIMSK|=(1<<0);
	
		sei();
    
	}	
}
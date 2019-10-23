/*
 * GccApplication15.c
 *
 * Created: 12/5/2017 9:00:34 PM
 *  Author: C.RONALDO.7
 */ 


#include <avr/io.h>

int main(void)
{
	SPCR=0b11010000;
	DDRB|=(1<<PB5)|(1<<PB7);
	
    while(1)
    {	
		
	
		SPDR=0b11111111;
    }
}
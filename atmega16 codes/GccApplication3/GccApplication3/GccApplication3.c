/*
 * GccApplication3.c
 *
 * Created: 12/2/2017 10:39:31 PM
 *  Author: C.RONALDO.7
 */ 


#include <avr/io.h>
#define F_CPU 16000000UL

int main(void)
{
    while(1)
    {
      DDRB = 0b11111111;
	  PORTB=  0b00000001;
    }
}
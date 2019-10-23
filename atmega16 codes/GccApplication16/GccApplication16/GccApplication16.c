/*
 * GccApplication16.c
 *
 * Created: 12/5/2017 10:00:08 PM
 *  Author: C.RONALDO.7
 */ 


#include <avr/io.h>
#include <avr/interrupt.h>
#include <util//delay.h>
ISR(SPI_STC_vect)
{


PORTA|=(1<<PA1);
_delay_ms(1000);
PORTA=0;	

}
int main(void)
{
DDRA|=(1<<PA0)|(1<<PA1);
DDRB=(1<<PB5);
    while(1)
    {

		SPCR=0b11000000;
      
		while(!(SPSR &(1<<SPIF)));
		sei();
if (SPDR==0b11111111)
{
	PORTA=(1<<PA1);
	_delay_ms(1000);
	PORTA=0;
}	
}}
/*
 * GccApplication10.c
 *
 * Created: 12/3/2017 2:37:10 PM
 *  Author: C.RONALDO.7
 */ 


#include <avr/io.h>

int main(void)
{

   
    DDRB|=(1<<PB3);
		ADMUX|=(1<<REFS0)|(1<<ADLAR)|(1<<MUX0)|(1<<MUX2);
		ADCSRA|=(1<<ADEN)|(1<<ADPS0)|(1<<ADPS1)|(1<<ADPS2);
       
	   TCCR0|=(1<<WGM00)|(1<<COM01)|(1<<WGM01)|(1<<CS02)|(1<<CS00);
		int adc=0;
		while(1)
		{ 
			ADCSRA|=(1<<ADSC);
			while(ADCSRA &(1<<ADSC));
			adc=(ADCL>>6)|(ADCH<<2);
			OCR0=adc/4;
		
		
}}
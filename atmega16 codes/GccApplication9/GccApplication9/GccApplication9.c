/*
 * GccApplication9.c
 *
 * Created: 12/3/2017 4:34:52 AM
 *  Author: C.RONALDO.7
 */ 


#include <avr/io.h>
#include "uart.h"
void init();

uint16_t do_adc();
void ADC_init(void)
{
	
	ADMUX|=(1<<REFS0)|(1<<MUX0)|(1<<MUX2);
	ADCSRA|=(1<<ADEN)|(1<<ADSC)|(1<<ADPS0)|(1<<ADPS1)|(1<<ADPS2);
	uart_init();

}
uint16_t do_adc()
{
	
	ADCSRA |= _BV(ADSC);
	
	while( ADCSRA & _BV(ADSC) )
	; 
	
	return ADC;
int main(void)

{
	
uint16_t adc_value; 
init();
while(1)
{
	adc_value = do_adc();
	if(adc_value>=512)
	{
		DDRB=0b11111111;
		PORTB=0b00000001;
	}
}
return 0;	
	
}
#include <avr/io.h>

int main(void)
{
	
	DDRC&=(0<<0);//a0
	ADMUX|=(1<<REFS0)|(1<<ADLAR);
	ADCSRA|=(1<<ADEN)|(1<<ADPS0)|(1<<ADPS1)|(1<<ADPS2);

	TCCR0A|=(1<<COM0A1)|(1<<WGM01)|(1<<WGM00);
	TCCR0B+=0b00000011;
	int adc=0;
	while(1)
	{
		DDRD&=(0<<PORTD6);//pin 6
		ADCSRA|=(1<<ADSC);
		while(ADSC)
		{
			
		}
		adc=(ADCL>>6)|(ADCH<<2);
		OCR0A=adc/4;
		
	}

	
}
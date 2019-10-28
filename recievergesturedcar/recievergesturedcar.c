#include<avr/io.h>
#define F_CPU 8000000
#include<util/delay.h>
void main()
{
   DDRB=0x00;
   DDRC=0xff;
   PORTB=0b11110000;
  
   while(1)
   {
         if((PINB &0b11110000)==0b10100000)
		  {    
		           PORTC=0b10100000;
				   _delay_ms(100);
				   }
				

            if((PINB &0b11110000)==0b01010000)
			 {
			         PORTC=0b01010000;
					 _delay_ms(100);
					 }
					 
            if((PINB &0b11110000)==0b00010000)
			  {
			        PORTC=0b00010000;
					_delay_ms(100);
					}
					
			if((PINB &0b11110000)==0b00100000)
			 {       
			           PORTC=0b00100000;
					   _delay_ms(100);
					   }
					   else
					   PORTC=0x00;		 
       }

  }

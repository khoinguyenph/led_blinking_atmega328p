/*
 * Led_blinking.cpp
 *
 * Created: 05/09/2023 10:41:13 CH
 * Author : Admin
 */ 

#include <avr/io.h>
#include <avr/delay.h>


int main(void)
{
       DDRB = 0b00000001; // PORT B0
       
       while (1)
       {
	       PORTB =  0b00000001; // enable
	       _delay_ms(1000); // 1000 ms = 1s
	       PORTB =  0b00000000; // disable
	       _delay_ms(1000); //1000 ms = 1s
 
    }
}


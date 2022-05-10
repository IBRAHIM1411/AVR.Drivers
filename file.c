/*
 * file.c
 *
 *  Created on: 10 May 2022
 *      Author: hp
 */

#include<avr/io.h>
#include<util/delay.h>


int main(){
	/*set pin direction as output*/
DDRA = 0b11111111;
    /*set pin value*/
PORTA = 0b11110001;

while(1){
	PORTA = 0b11111111;
  _delay_ms(1000);
	PORTA = 0b00000000;
	 _delay_ms(1000);
}
}

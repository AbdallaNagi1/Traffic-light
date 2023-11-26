#include <avr/io.h>
#include <util/delay.h>



int main() {
  DDRC = 255 ;
  DDRA = 0b00000001;
  DDRA = 0b00000010;
  DDRA = 0b00000100;
int arr[] = {

    0b00111111,
    0b00000110,
    0b01011011,
    0b01001111,
    0b01100110,
    0b01101101,
    0b01111101,
    0b00000111,
    0b01111111,
    0b01101111
};
while(1){
    	for (int i = 1;i < 6;i++){
    	PORTA = 0b0000001;
    	PORTC = arr[i];
        _delay_ms(1000);
      }
    	for (int i = 1;i < 6;i++){
    	PORTA = 0b00000010;
    	PORTC = arr[i];
    	        _delay_ms(1000);
      }
    	for (int i = 1;i < 6;i++){
    	PORTA = 0b00000100;
    	PORTC = arr[i];
    	        _delay_ms(1000);
      }
}
    return 0;
}

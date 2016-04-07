/* ledblink.c, an LED blinking program */
#include<avr/io.h>

int main(void)
{


  DDRB |= (1 << PB0); // Set LED as output
  TCCR0A = (1 << WGM01 | 1 << WGM00 | 1 << COM0A1);
  TCCR0B = (1 << CS00); // Set up timer
  OCR0A = 127;

        while (1)
        {
        }
}
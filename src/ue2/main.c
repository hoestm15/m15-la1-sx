#include <avr/io.h>
#define F_CPU   1000000UL
#include <util/delay.h>

int main() {


DDRB = (1 << PB5);

while (1) {

  PORTB = (1 << PB5);
  _delay_ms(500);
  PORTB = 0;
  _delay_ms(500);

}

return 0;
}

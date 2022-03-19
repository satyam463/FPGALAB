#include <avr/io.h>
#include <util/delay.h>
#include<stdbool.h>
bool NOT(bool A)
{
   return !A;
}

bool AND(bool A, bool B)
{
   return A && B;
}
bool NAND(bool A, bool B)
{
   return NOT(AND(A,B));
}
int main (void)
{
	
   // declare input pins
   DDRD |= 0b00000000;	
   // Arduino boards have a LED at PB5
   // set PB5, pin 13 of arduino as output
   DDRB    |= ((1 << DDB5));
   
   // declare variables
   int u,v,w,z,f,ip;

   while (1) {
    
	   ip = PIND;
	   u = ip & 0b00000100;
	   v = ip & 0b00001000;
	   w = ip & 0b00010000;
           z= ip & 0b00100000;


      	   f =NAND(NAND(NAND(NAND(u,u),v),NAND(w,w)),NAND(z,z)); 

	   if(f == 1)
              PORTB = ((1 <<  PB5));
	   else
	      PORTB = ((0 << PB5));
   }

  return 0;

}

#include<stdio.h>
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

int main()
{
   bool U = false, V = true, W = false,Z=false;	
   bool result;
   result=NAND(NAND(NAND(NAND(U,U),V),NAND(W,W)),NAND(Z,Z));
   result ? printf("1\n") : printf("0\n");
   return 0;
}


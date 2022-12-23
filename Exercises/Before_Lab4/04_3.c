#include <stdio.h> 

int main ()
{  
   int a = 6; // 110 kod U2
   int b = ~a+1;
   printf("a = %d, b = %d ", a, b); // a = 6, b = -6  
   getchar();
   return 0;
}
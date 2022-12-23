#include <stdio.h> 
int main ()
{  
   int a = 6; // 110
   int b = 3; //  11
   int wynik = a | b;  // da 7 a więc 111
   printf("%d | %d = %d", a, b, wynik);
   getchar();
   return 0;
}
#include <stdio.h> 
int main ()
{  
   int a = 6; // 110
   int b = 3; //  11
   int wynik = a & b;  // da 2 a więc 010
   printf("%d & %d = %d", a, b, wynik);
   getchar();
   return 0;
}
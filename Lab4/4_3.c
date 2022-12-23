#include <stdio.h>
 
int main ()
{  
    unsigned int  liczba ;
    scanf("%d", &liczba);
    int mask = 1;
    int wynik = 0;
    do{
        (liczba & mask) == 1 ? (wynik++) : wynik;
        liczba = liczba >> 1;
    }while(liczba > 0);   
    printf("Liczba %d ma bitow ustawionych na 1: %d \n",liczba, wynik);  // Liczba 19 ma bitow ustawionych na 1: 3 

    return 0;
}
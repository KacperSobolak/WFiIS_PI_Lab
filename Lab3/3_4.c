#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    time_t czas;
    int tab[10];
    for (int i = 0; i < 10; i++){
        tab[i] = 0;
    }
    int liczba_losowan = 100000;
    srand( (unsigned int)time(&czas) ); 
    double wylosowana;     
    for (int i = 0; i < liczba_losowan;i++){
        wylosowana = (rand()%10) + (rand()/(1.0 + RAND_MAX));
        tab[(int)wylosowana] += 1;
    }
    printf("Dla %d losowan:\n", liczba_losowan);
    for (int i = 0; i < 10; i++){
        printf("Przedzial[%d, %d): %dpunktow\n", i, (i+1), tab[i]);
    }
    
    return 0;
}
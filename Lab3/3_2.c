#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    time_t czas;
    srand((unsigned int)time(&czas));

    int tab[10];
    int min = 10;
    int liczba = 0;
    for (int i = 0; i < 10; i++){
        tab[i] = -10 + rand()%21;
        printf("Elemnent[%d] =%+3d\n", i, tab[i]);
        if(tab[i] < min){
            min = tab[i];
            liczba = 1;
        }
        else if (tab[i] == min){
            liczba += 1;
        }
    }
    printf("Najmniejsza liczba to %d, wystepuje %d razy", min, liczba);

    return 0;
}
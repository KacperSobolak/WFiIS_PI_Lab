#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int min(float *first, int n){
    int min = 0;
    
    for (int i = 1; i < n;i++){
        if (*(first + i) < *(first + min)){
            min = i;
        }
    }
    return min;
}
float *max(float *first, float *last){
    float *max = first;
    while (first <= last){
        if(*first > *max){
            max = first;
        }
        first = first+1;
    }
    return max;
}

int main(void){
    time_t czas;
    srand((unsigned int)time(&czas));
    int a = -3;
    int b = 3;

    float tablica[100];

    for (int i = 0;i<100;i++){
        float random_value = a + rand()%(b-a) + rand()/(1.0 + RAND_MAX);
        tablica[i] = random_value;
    }

    int cimin = min(tablica, 100);
    float *camax = max(tablica, tablica + 99);
    printf("minimalny we wszystkich elementach = %0.4f adres elementu: %p, maksymalny we wszystkich elementach %0.4f adres elementu: %p\n", tablica[cimin], &tablica[cimin], *camax, camax);
    printf("--------------------------------------------------------------------------------\n");

    for (int i = 0; i < 10; i++){
        int imin = min((tablica+(i*10)), 10);
        float *amax = max((tablica + (i*10)), (tablica + ((i*10)+9)));   
        printf("Elementy od %d do %d, min = %f adres %p max = %f adres %p\n", i*10, i*10+9, tablica[(i*10)+imin], &tablica[(i*10)+imin], *amax, amax);
    }

    return 0;
}
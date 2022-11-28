#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    time_t czas;

    int max, min = 0;
    float average;


    srand((unsigned int)time&czas);
    for (int i = 1; i <= 20; i++){
        int wylosowana = 118 + rand()%(286-119);
        if (i == 1){
            max = wylosowana;
            min = wylosowana;
        }
        if(wylosowana > max){
            max = wylosowana;
        }
        if(wylosowana < min){
            min = wylosowana;
        }
        average += wylosowana;
        printf("%2d %10d\n",i, wylosowana);
    }
    average = average/20;
    printf("Maksymalna = %d\n", max);
    printf("Minimalna = %d\n", min);
    printf("Srednia arytmetyczna = %f\n",average);
}
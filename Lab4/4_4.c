#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    time_t czas;
    srand((unsigned int)time(&czas));
    
    int lenght;
    printf("Podaj długość tablicy: ");
    scanf("%d", &lenght);

    int tablica[lenght];

    for (int i = 0; i < lenght; i++){
        tablica[i] = rand()%(61);
        printf("element[%d] = %d\n", i, tablica[i]);
    }

    for (int i = 0; i < lenght - 1; i++){
        if (tablica[i] % 2 == 1){
            for (int j = i; j < lenght; j++){
                if (tablica[j] % 2 == 0){
                    int tmp = tablica[i];
                    tablica[i] = tablica[j];
                    tablica[j] = tmp;
                }
            }
        }
    }

    printf("Tablice po zmianie\n");
    for (int i = 0; i < lenght;i++){
        if (tablica[i] % 2 == 0){
           printf("Parzysta ");
        }
        else{
            printf("Nie parzysta");
        }
        printf("element[%d] = %d\n", i, tablica[i]);
    }

    return 0;
}
#include <stdio.h>

int main(){
    printf("Podaj liczbe do sprawdzenia: ");
    int liczba;
    scanf("%d", &liczba);
    if ((liczba & 1) == 0){
        printf("Liczba jest parzysta\n");
    }
    else {
        printf("Liczba nie jest parzysta\n");
    }
    return 0;
}
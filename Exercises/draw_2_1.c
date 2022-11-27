#include <stdio.h>

int main(){
    int ilosc_pieter;
    printf("Podaj liczbe pieter: ");
    scanf("%d", &ilosc_pieter);
    for (int i = 1; i <= ilosc_pieter; i++){
        for (int j = 1; j <= i; j++){
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}
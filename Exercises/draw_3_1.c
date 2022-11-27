#include <stdio.h>

int main(){
    int ilosc_pieter;
    printf("Podaj liczbe pieter: ");
    scanf("%d", &ilosc_pieter);
    for (int i = 0; i <= ilosc_pieter; i++){
        for (int j = 1; j <= ilosc_pieter-i; j++){
            printf("%d ", ilosc_pieter-i);
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>

int main(){
    int ilosc_pieter;
    printf("Podaj liczbe pieter: ");
    scanf("%d", &ilosc_pieter);
    int i = 1;
    while (i <= ilosc_pieter){
        int j = 1;
        while (j <= i){
            printf(" *");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
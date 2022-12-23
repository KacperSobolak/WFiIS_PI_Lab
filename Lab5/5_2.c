#include <stdio.h>
#include <limits.h>

int main(){
    int liczba1, liczba2;
    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &liczba1);
    printf("Podaj druga liczbe: ");
    scanf("%d", &liczba2);
    
    int mask = 1 << (((sizeof(int)*CHAR_BIT)/2)-1);
    
    if ((liczba1 & mask) == (liczba2 & mask)){
        printf("Druga połowa bitów jest taka sama, użyta maska: %d\n", mask);
    }
    else{
        printf("Druga połowa bitów jest różna, użyta maska: %d\n", mask);
    }

    return 0;
}
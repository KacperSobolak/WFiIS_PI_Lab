#include <stdio.h>

int main(){
    int number;
    printf("Wpisz liczbe\n");
    scanf("%d", &number);
    for (int i = 1; i <=(number + 1);i++){
        for (int j = i; j <= (number);j++){
            printf(" ");
        }
        for (int j = 1;j <= i;j++){
            printf("%d", (number + 1 - j));
        }
        printf(" ");
        for(int j = i;j <= (number);j++){
            printf("%d", (number - j));
        }
        printf("\n");
    }
    return 0;
}
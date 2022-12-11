#include <stdio.h>

int main(){
    printf("Podaj duza litere ");
    char letter;
    scanf("%c", &letter);
    int letter_i = letter;
    for (int i = 0; i <=letter_i-65 ;i++){
        for (int j = 1; j <= i;j++){
            printf(" ");
        }
        for (char c = 'A'; c <=letter ;c++){
            printf("%c", c);
        }
        letter -= 1;
        for (char c = letter; c >= 'A' ;c--){
            printf("%c", c);
        }
        printf("\n");
    }
}
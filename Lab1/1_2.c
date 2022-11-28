#include <stdio.h>

int main(){
    int counter = 0;

    for(int i = -5; i <= 98; i++){
        if (i % 4 == 0 && i % 5 != 0){
            printf("%d\n", i);
            counter++;
        }
    }
    printf("Takich liczb w przedziale od -5 do 98 jest %d", counter);
}
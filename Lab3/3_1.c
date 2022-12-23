#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    printf("Dlugosc liczb musza byc wieksze niz 40 a mniejsze niz 90\n");
    printf("Podaj dlugosc pierwszej liczby\n");
    int dlugosc1, dlugosc2;
    scanf("%d", &dlugosc1);
    printf("Podaj dlugsoc drugiej liczby\n");
    scanf("%d", &dlugosc2);
    
    // if (dlugosc1 < 40 || dlugosc1 > 90 || dlugosc2 < 40 || dlugosc2 > 90){
    //     printf("Bledne liczby\n");
    //     return 0;
    // }
    if (dlugosc2 > dlugosc1){
        int tmp = dlugosc1;
        dlugosc1 = dlugosc2;
        dlugosc2 = tmp;
    }
    printf("%d, %d\n", dlugosc1, dlugosc2);
    int liczba1[dlugosc1], liczba2[dlugosc2];
    time_t czas;
    srand((unsigned int)time(&czas));
    for (int i = 0; i < dlugosc1 - 1; i++){
        liczba1[i] = rand()%(10);
    }
    for (int i = 0; i < dlugosc2 - 1; i++){
        liczba2[i] = rand()%(10);
    }
    liczba1[dlugosc1 - 1] = 1 + rand()%9;
    liczba2[dlugosc2 - 1] = 1 + rand()%9;

    int sumat[dlugosc1+1];
    int przeniesienie = 0;
    int suma;

    for (int i = dlugosc1 - 1; i >= 0;i--){
        printf("%d", liczba1[i]);
    }
    printf("\n");
    for (int i = dlugosc2 - 1; i >= 0;i--){
        printf("%d", liczba2[i]);
    }

    for (int i = 0; i < dlugosc1; i++){
        suma = liczba1[i] + (dlugosc2 > i ? liczba2[i] : 0) + przeniesienie;
        przeniesienie = 0;
        if (suma > 9){
            suma = suma - 10;
            przeniesienie = 1;
        }
        sumat[i] = suma;
    }

    sumat[dlugosc1] = przeniesienie;
    printf("\n");

    for (int i = dlugosc1; i >= 0;i--){
        printf("%d", sumat[i]);
    }

    return 0;
}

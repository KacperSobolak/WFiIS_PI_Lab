#include <stdio.h>

int main(){
    char liczba_b[8];
    int liczba_d;
    int mnoznik = 128;
    for (int i = 0; i < 8;i++){
        scanf("%c", &liczba_b[i]);
        (liczba_b[i] & 1) == 1 ? liczba_d = liczba_d + mnoznik: liczba_d;
        mnoznik = mnoznik/2;
    }
    printf("%s\n", liczba_b);
    printf("%d\n", liczba_d);

    
    return 0;
}
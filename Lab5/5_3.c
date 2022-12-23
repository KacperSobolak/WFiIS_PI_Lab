#include <stdio.h>

void fun_1(int *tab, int rozmiar, int *liczba_zer, int *liczba_parzystych, int *liczba_nieparzystych) {
    *liczba_zer = 0;
    *liczba_nieparzystych = 0;
    *liczba_parzystych = 0;
    for (int i = 0; i < rozmiar; i++) {
        if (tab[i] == 0){
            (*liczba_zer)++;
        }
        else if (tab[i] % 2 == 0) {
            (*liczba_parzystych)++;
        } else {
            (*liczba_nieparzystych)++;
        }
    }
}

int main() {
    int tab1[] = {64, -79, -5, 81, 22, [900]=86, 1, 46, -79, 19, 33, -90, -83, 61, -68, 31, 44, -53, -41, 65, 17, -49, -15, -97, 65, -28, -20, 20, -63, -72, 75, 77, -51, -53, 35, 47, -30, -47, 32, -97, -61, 48, 40, -52, -43, -16, -29, 15, -73, 87, 43, 11, 90, 8, 59, -53, -72, 72, -26, -97, 50, 22, -73, -38, -54, -41, -25, 15, -11, 84, -6, 27, 32, -65, 51, 65, 38, -19, 99, -44, 54, -9, 22, 50, 84, -95, 68, 14, 62, -22, 32, 3, -18, -45, 53, 20, 5, 69, -92, -99, 95, -84, -41, -77, -91, 17, 33, 47, 75, 33, 79, 6, -99, -22, -67, 61, -17};
    int tab2[] = {64, -79, -5, 81, 22, 86, 1, 46, -79, 19, 33, -90, -83, 61, -68, 31, 44, -53, -41, 65, 17, -49, -15, -97, 65, -28, -20, 20, -63, 0, 75, 77, -51, -53, 35, 47, -30, -47, 32, -97, -61, 48, 40, -52, -43, -16, -29, 15, -73, 87, 43, 11, 90, 8, 59, -53, -72, 72, -26, -97, 50, 22, -73, -38, -54, -41, -25, 15, 0, 84, -6, 27, 32, -65, 51, 65, 38, -19, 99, -44, 54, -9, 22, 50, 84, -95, 68, 14, 62, -22, 32, 3, -18, -45, 53, 20, 5, 69, -92, -99, 95, -84, -41, -77, -91, 17, 33, 47, 75, 33, 79, 6, 0, -22, -67, 61, -17};
    
    int liczba_zer = 0;
    int liczba_parzystych = 0;
    int liczba_nieparzystych = 0;

    fun_1(tab1, sizeof(tab1) / sizeof(tab1[0]), &liczba_zer, &liczba_parzystych, &liczba_nieparzystych);
    printf("Tablica tab1 ilosc zer %d, ilosc parzystych %d, ilosc nieparzystych %d\n", liczba_zer, liczba_parzystych, liczba_nieparzystych);
    
    fun_1(tab2, sizeof(tab2) / sizeof(tab2[0]), &liczba_zer, &liczba_parzystych, &liczba_nieparzystych);
    printf("Tablica tab2 ilosc zer %d, ilosc parzystych %d, ilosc nieparzystych %d\n", liczba_zer, liczba_parzystych, liczba_nieparzystych);
    
    return 0;
}

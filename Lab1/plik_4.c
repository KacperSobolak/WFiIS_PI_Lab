#include <stdio.h>

int main(){
    int proba = 0;
    int kwota = 0;
    do{
        proba++;
        printf("Podaj kwote (podzielna przez 5)\n");
        scanf("%d", &kwota);
    }while ((kwota % 5 != 0) && (proba < 3));
    if ((kwota % 5 != 0) && (proba == 3)){
        printf("Nie podales kwoty podzielnej przez 5");
        return 0;
    }
    int ile20 = 0, ile10 = 0, ile5 = 0;
    while(kwota > 0){
        if (kwota >= 20){
            kwota -= 20;
            ile20++;
        }
        else if(kwota >= 10){
            kwota -= 10;
            ile10++;
        }
        else{
            kwota -= 5;
            ile5++;
        }
    }
    printf("Uzyte baknoty:\n%d banknotow 20zl\n%d banknotow 10zl\n%d banknotow 5zl\n", ile20, ile10,ile5);
    printf("Ilosc uzytych banknotow wynosi %d\n", (ile20 + ile10 + ile5));
}
    
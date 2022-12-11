#include <stdio.h>

int main(){
    double summation;
    double eps;
    int p = 0;
    do{
        if (p > 0){
            printf("Wartosc bledna podaj jeszcze raz\n");
        }
        else{
            printf("Podaj wartosc dokladnosci (0 <= eps <= 1)\n");     
        }
        scanf("%lf", &eps);
        p++;
    }while (eps > 1 || eps < 0);
    double i = 1.0;
    double res;
    do{
        res = 1/i;
        summation += res;
        i++;
    }while(res >= eps);
    printf("Wynik szeregu: %lf", summation);
}
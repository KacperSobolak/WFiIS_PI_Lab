#include <stdio.h>

int pierwsza(int liczba){
	if (liczba < 2){
		return 1;
	}
	for (int i = 2; i < liczba/2 + 1; i++){
		if ((liczba % i) == 0){
			return 1;
		}
	}
	return 0;
}

int main(){
	int number;
	printf("Podaj liczbe do sprawdzenia ");
	scanf("%d", &number);
    if (pierwsza(number) == 0){
        printf("Liczba %d jest pierwsza\n", number);
    }
    else{
        printf("Liczba %d nie jest pierwsza, oto jej dzielniki:\n", number);
        for(int i = 1; i <= number;i++){
            if (number % i == 0){
                printf("%d ", i);
            }
        }   
        printf("\n");
    }
	return 0;
}
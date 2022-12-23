#include <stdio.h>

int main() {
  int liczba_d;
  printf("Podaj liczbę dziesiętną (Z przedziału od 0 do 255): ");
  scanf("%d", &liczba_d);
  while (liczba_d > 255){
    printf("Liczba jest poza przedziałem, podaj jeszcze raz: ");
    scanf("%d", &liczba_d);
  }

  char liczba_b[9];
  int mask = 1;
  for (int i = 7; i >= 0; i--) {
    int tmp = liczba_d >> (7 - i);
    char wynik = (tmp & mask);
    liczba_b[i] = wynik + '0';
  }
  liczba_b[8] = '\0';

  printf("Liczba %d to %s w zapisie binarnym\n", liczba_d, liczba_b);

  return 0;
}

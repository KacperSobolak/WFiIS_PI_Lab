#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  time_t czas;
  double A[10];
  srand( (unsigned int)time(&czas) );       // inicjalizacja gen. aktualnym czasem systemowym 

  printf("Wylosowane tablice:\n");
  int a = -100, b=100; 
  printf("%f", A[0]);
  int max = 0, min = 0;
  for(int i=0;i < 10;++i){
    A[i] = a + (rand()%(b-a+1) + (rand()/(1.0+RAND_MAX)));
    printf("A[%d] = %6.2f\n",i , A[i]);
    if (A[i] > A[max]){
      max = i;
    }
    else if (A[i] < A[min]){
      min = i;
    }
  }
  printf("%.2f, %.2f", A[max], A[min]);
 
  return 0;
}

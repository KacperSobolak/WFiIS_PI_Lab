#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  time_t czas;
  double A[10];
  srand( (unsigned int)time(&czas) );      

  printf("Wylosowane tablice:\n");
  int a = -100, b=100; 
  for(int i=0;i < 10;++i){
    A[i] = a + (rand()%(b-a) + (rand()/(1.0+RAND_MAX)));
    printf("elemnent[%d] =%7.2f\n",i , A[i]);
  }
  double tmp;
  for (int i = 0; i < 5; i++){
    tmp = A[i];
    A[i] = A[9-i];
    A[9-i] = tmp;
  }
  printf("Tablice po zmianie\n");

  for (int i = 0; i < 10; i++){
    printf("element[%d] =%+7.2f\n", i, A[i]);
  }

  return 0;
}

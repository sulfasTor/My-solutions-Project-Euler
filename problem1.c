#include <stdio.h>

int main (void)
{
  int i;
  int sum = 0;
  int limit = 1000;
  
  for (i = 0; i < limit; i++){
    if (i%3==0 || i%5==0){
      sum += i;
      printf("%d\n", i);
    }
  }
  printf("Somme is:%d\n", sum);
}

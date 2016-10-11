#include <stdio.h>

int main (void)
{
  int i;
  int num = 1;
  int min = 1;
  int max = 20;
  int smallest = 1;

  while (smallest == 1){
    for (i = min; i <= max; i++){
      if (num % i != 0){
	//	printf("%d\n", num);
	num++;
	i=min;
      } else {
	smallest = num;
      }
    }
  }
  printf("%d\n", smallest);
      
  return 0;
}

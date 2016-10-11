#include <stdio.h>

int isEven(int n);

int main (void)
{
	int i = 2;
	int limit = 4000000;
	int sum = 0;
	int num1 = 1;
	int num2 = 1;
	int temp = 0;
  
	while (temp < limit){
		temp = num1 + num2;
		num2 = num1;
		num1 = temp;
		
		//printf("%d\n", temp);
		if (isEven(temp)==1){
			sum += temp;
//			printf("%d\n", sum);
		}
		i++;
	}
	
	printf("The sum is:%d\n", sum);

	return 0;
}

int isEven(int n)
{
	return n%2==0;
}

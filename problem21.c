#include <stdio.h>
int d (int num);


int main (void)
{
	int i;
	int limit = 10000;
	int temp = 0;
	int amicalsum = 0;

	for (i = 1; i < limit; i++){
		temp = d(i);
		if (d(temp) == i && temp != i)  amicalsum += i;
	}

	printf("%d\n", amicalsum);
		  
	return 0;
}

int d(int num)
{
	int j;
	int sum = 0;
			
	for (j = 2; j < num/2 + 1; j++){
		if (num % j == 0) sum += j;
	}
		
	return sum;
}

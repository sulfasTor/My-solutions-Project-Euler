#include <stdio.h>

int main (void)
{
	int i;
	int sqsum = 0;
	int sum = 0;
	int limit = 100;

	/* //Gaus sum */
	/* sum = limit*(limit + 1)/2; */
	
	for (i = 0; i <= limit; i++){
		sqsum += i*i;
		sum += i;
	}
	sum *= sum;

	printf ("%d - %d = %d\n", sum, sqsum, sum - sqsum);
  
	return 0;
}

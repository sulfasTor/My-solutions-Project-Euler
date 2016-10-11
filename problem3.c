#include <stdio.h>
int isPrime(unsigned long n);

int main (void)
{
	unsigned long i;
	unsigned long factors = 1;
	long number = 600851475143;
//	long number = 13195;
  
	for (i = 1 ; i < number ; i++){
		if (isPrime(i) && number % i == 0) {
			factors *= i;
			if (factors == number) break;
		}

	}
	printf("%lu\n", i);
	   
	return 0;
}

int isPrime(unsigned long n)
{
	unsigned long i = 2;
	if(n == 2) return 1;
	while(i < n){
		if (n % i == 0) {
			return 0;
		}
		i++;
	}
	return 1;
}

#include <stdio.h>
int isPrime(unsigned long n);


int main (void)
{
	int i = 1;
	int num = 1;

	while (i <= 10001){
		if (isPrime(num)){
			i++;
//			printf("%d\n", i);
		}
		num=num+2;;
	}
	printf("%d\n", num);
  
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

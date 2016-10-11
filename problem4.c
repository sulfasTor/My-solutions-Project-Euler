#include <stdio.h>
int isPalindrome(int num);


int main(void)
{
	unsigned int i;
	unsigned int j;
	unsigned int min = 100;
	unsigned int max = 999;
	unsigned int maxPalindrome = 0;
	unsigned int temp = 0;
	unsigned int num1 = 0;
	unsigned int num2 = 0;
  
	for (i = min; i < max; i++){
		for (j = min; j < max; j++){

			temp = i * j;

			if (isPalindrome(temp) && temp > maxPalindrome){
				maxPalindrome = temp;
				num1 = i;
				num2 = j;

			}
		}
	}
	printf("%d * %d = %d \n", num1 ,num2, maxPalindrome);

  
	return 0;
}

int isPalindrome(int num)
{
	int n = num;
	int result = 0;
	while (n > 0) 
	{
		result = result*10 + n%10; //reverse the string
		n /= 10;
	}
//	  printf("%d : %d\n" , result,num);
	return result == num;
}

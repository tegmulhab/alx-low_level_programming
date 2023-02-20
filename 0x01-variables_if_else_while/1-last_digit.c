#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - the main function is the begining of an excutio
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
		printf(" the last digit of %d  is %d greater than 5\n", n, ld);
	}
	else if (ld == 0)
	{
		printf(" the last digit of %d  is %d and is \n0", n, ld);
	}
	else
	{
		printf(" the last digit of %d  is %d and is less than 6 and not 0\n", n, ld);
	}
	return (0);
}

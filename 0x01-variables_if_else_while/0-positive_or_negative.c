#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - determines if a number is positive, negative or zero
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = atoi(n);
	if (m > 0)
	{
		printf("%d is Positive\n", m);
	}
	else if (m == 0)
	{
		printf("%d is Zero\n", m);
	}
	else
	{
		printf("%d is Negetive\n", m);
	}
	return (0);
}

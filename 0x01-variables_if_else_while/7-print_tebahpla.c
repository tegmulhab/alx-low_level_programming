#include <stdio.h>
/**
 * main - Entery point
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}

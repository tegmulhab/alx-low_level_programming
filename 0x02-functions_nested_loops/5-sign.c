#include "main.h"
#include <stdio.h>
/**
 * print_sign - checks if the alphabet is a lowercase
 * @n: Description of parameter c (this is an integer parameter)
 * Return: Always 0.
 */
int print_sign(int n)
{
	if (n > 1)
	{
		putchar('+');
		return (1);
	}
	else if  (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}

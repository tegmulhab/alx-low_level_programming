#include "main.h"

/**
 * print_alphabet_x10 - print all alphabet in lowercase
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char letter;
	int n;

	for (n = 0; n <= 9; n++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
	_putchar('\n');
	}
}

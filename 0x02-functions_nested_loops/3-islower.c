#include "main.h"
#include <ctype.h>
/**
 * _islower - checks if the alphabet is a lowercase
 * @c: Description of parameter c (this is an integer parameter)
 * Return: Always 0.
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	return (0);
}

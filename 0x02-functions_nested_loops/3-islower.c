#include "main.h"
#include <ctype.h>
/**
 * _islower - checks if the alphabet is a lowercase
 * @c: Description of parameter x
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

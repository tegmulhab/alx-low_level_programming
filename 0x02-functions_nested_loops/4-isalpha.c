#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checks if the alphabet is a lowercase
 * @c: Description of parameter x
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	return (0);
}

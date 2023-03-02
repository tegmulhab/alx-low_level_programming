#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: where the the second string will be coppied to
 * @src: contains value the volue to be coppied
 * @n: contans the value of the number of strings to be coppied
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}


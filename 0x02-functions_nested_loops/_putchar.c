#include "main.h"
#include <unistd.h>
/**
 * _puchar - writes the character c to the stdout
 * @c: the character to print
 * 
 * Return: on Success 1.
 * on Error, -1 is returned, and errno is set appropriatel.y
 * 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

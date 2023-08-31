#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to standard output.
 * @c: Character to be printed.
 *
 * Return: 1
 * Error, -1 is returned, even as errno is set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

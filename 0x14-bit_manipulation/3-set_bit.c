#include "main.h"

/**
 * set_bit - bit index setting to 1
 * @n: number pointer of index to be changed.
 * @index: bit index to be set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

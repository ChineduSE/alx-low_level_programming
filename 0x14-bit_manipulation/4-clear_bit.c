#include "main.h"

/**
 * clear_bit - the goal is to set bit value to 0
 * @n: number pointer of value to be changed
 * @index: bit index to be cleared
 *
 * Return: success will be 1, failure for -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

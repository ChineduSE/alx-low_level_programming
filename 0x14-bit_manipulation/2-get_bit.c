#include "main.h"

/**
 * get_bit - gives bit value at a power in decimal.
 * @n: value to be found.
 * @index: power of the bit.
 *
 * Return: bit value.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

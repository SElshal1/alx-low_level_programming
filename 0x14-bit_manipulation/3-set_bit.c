#include "main.h"

/**
 * set_bit - sets a bit at a the index
 * @n: the number to index
 * @index: the bit to set 
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
			return (-1);
	return (!!(*n |=1L << index));
}

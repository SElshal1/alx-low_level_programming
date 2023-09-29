#include "main.h"

/**
 *flip—bits - return number of bits that would need to be flipped to
 *transform one number to another
 *@n: first number
 *@m: second number
 *Return: number of bits to flip to convert numbers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{ 
	unsigned long int current = n ^ m;
	unsigned int count = 0;

	while (current)
	{
		if (current & 1ul)
			count++;
		current = current >>1;
	}

	return (count);
}


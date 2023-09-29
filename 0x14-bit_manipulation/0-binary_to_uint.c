#include "main.h"

/**
 * binary_to_uint - converts a binary number string to unsigned int
 * @b: the binary number as a string  
 *
 * Return: the unsigned int form of b 
 */
unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int valu = 0;

	if (!p)
		return (0);

	for (n = 0; p[n]; n++)
	{
		if (p[n] < '0' || p[n] > '1')
			return (0);
		valu = 2 * valu + (p[n] - '0');
	}

	return (valu);
}




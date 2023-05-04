#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip to get
 * from one number to another.
 * @n: first number
 * @m: second number
 *
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int index, bits = 0;
	unsigned long int curr;

	for (index = 63; index >= 0; index--)
	{
		curr = (n ^ m) >> index;
		if (curr & 1)
			bits++;
	}

	return (bits);
}

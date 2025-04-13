#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <math.h>
/**
 * flip_bits - the number of bits flip to get from one number to another.
 * @n: number 1
 * @m: number 2
 * Return: 1 if it worked
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int xor = n ^ m;

	while (xor != 0)
	{
		if (xor & 1)
		{
			count++;
		}
	xor = xor >> 1;
	}
	return (count);
}

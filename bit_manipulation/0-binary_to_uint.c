#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <math.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number
*/
unsigned int binary_to_uint(const char *b)
{
	int i = 0, len = 0, num = 0;

	if (!b)
		return (0);
	for (len = 0; b[len]; len++)
		;
	for (i = 0; i < len; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
	num = 2 * num + (b[i] - '0');
	}
	return (num);
}

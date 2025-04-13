#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <math.h>
/**
 * get_bit - returns value of a bit at a given index
 * @n: number
 * @index: index of bit
 * Return: value of a bit at a given index.
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}

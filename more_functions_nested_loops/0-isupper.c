#include "main.h"

/**
 * _isupper - function
 * @a: variables
 * Return: 1 or 0 for uppercase 
 *
 */

int _isupper(int a)
{
	if (a > 64 && a < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

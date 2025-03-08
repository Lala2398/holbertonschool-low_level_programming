#include "main.h"

/**
 * _isdigit -  checks for a digit (0 through 9)
 *
 * @c: Variable
 * Return: On success 1.
 * On error, -1 is returned.
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

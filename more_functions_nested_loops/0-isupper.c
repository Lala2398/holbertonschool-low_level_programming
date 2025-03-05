#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 * @a: the character to be checked
 * Return: 1 if character is uppercase, 0 otherwise
 */
int _isupper(int a)
{
	if (a >= 'A' && a <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

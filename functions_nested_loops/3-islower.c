#include "main.h"
/**
 * _islower - Entry function
 * @n: some variables
 * Return: Always 0 (Success)
 */
int _islower(int n)
{
	if (n >= 97 && n <= 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

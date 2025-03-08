#include "main.h"
/**
 * print_diagonal - function
 * @n: times
 *
 * Return: 1 if upper, or 0
 */
void print_diagonal(int n)
{
	int j = 0;
	int i = 0;

	while (i < n)
	{
		j = 0;
		while (j <= i)
		{
			if (j != 0)
			{
				_putchar(' ');
			}
			j++;
		}
	_putchar(92);
	_putchar('\n');
	i++;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}

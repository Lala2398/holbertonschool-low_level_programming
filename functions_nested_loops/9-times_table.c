#include "main.h"

/**
 * times_table  - Prints the 9 times table starting from 0
 *
 * Return: void (No return value)
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i * j < 10)
			{
				_putchar((i * j) % 10 + '0');
			}
			else
			{
				_putchar((i * j) / 10 + '0');
				_putchar((i * j) % 10 + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				if (i * (j + 1) < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}

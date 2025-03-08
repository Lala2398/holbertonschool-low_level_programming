#include "main.h"
/**
 * more_numbers - checks
 *
 * Return: 1 if upper, otherwise 0
 */

void more_numbers(void)
{
	int a = 0;
	int b = 0;

	while (a < 10)
	{
		while (b < 15)
		{
			if (b > 9)
			{
				_putchar(1 + '0');
			}
			_putchar(b % 10 + '0');
			b++;
		}
	b = 0;
	_putchar('\n');
	a++;
	}
}

#include "main.h"
/**
 *print_square - function that prints a square
 *
 *@size: Variable
 *Return: Always 0 (Success)
 */
void print_square(int size)
{
	int i = 0;
	int j = 0;

	while (j < size)
	{
		while (i < size)
		{
			_putchar(35);
			i++;
		}
		j++;
		i = 0;
		_putchar('\n');
	}
	if (size < 1)
	{
		_putchar('\n');
	}
}

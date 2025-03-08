#include "main.h"
/**
 * print_triangle - function that prints a triangle
 * @size: Variable
 * Return: triangle
 */

void print_triangle(int size)
{
	int i;
	int j;

	for (i = 0; i < size ; i++)
	{

		for (j = 0; j <= (size - (i + 2)); j++)
		{
			_putchar(' ');
		}
		for (j = 0; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');

	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}

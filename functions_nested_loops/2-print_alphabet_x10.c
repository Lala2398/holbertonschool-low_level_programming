#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet X 10 times
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int num = 0;

	while (num < 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		num++;
		letter = letter - 26;
	}
}

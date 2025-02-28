#include "main.h"

/**
 * print_alphabet - prints all the alphabet
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char myVar = 'a';

	while (myVar <= 'z')
	{
		_putchar(myVar);
		myVar++;
	}
	_putchar('\n');
}

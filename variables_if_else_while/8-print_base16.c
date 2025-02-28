#include <stdio.h>

/**
 * main - prints numbers in hexadecimal (base 16)
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			putchar(i + 48);
		}
		else
		{
			putchar(i + 87);
		}
	}
	putchar('\n');
	return (0);
}

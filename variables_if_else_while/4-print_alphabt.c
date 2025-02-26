#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char character = 'a';

	while (character <= 'z')
	{
		if (character != 'q' && character != 'e')
		{
			putchar(character);
		}
		character++;
	}
	putchar('\n');
	return (0);
}

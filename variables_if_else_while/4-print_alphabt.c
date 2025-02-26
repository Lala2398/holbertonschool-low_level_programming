#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry
 * Return: Always 0
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

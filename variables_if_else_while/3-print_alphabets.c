#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char small = 'a';
	char big = 'A';

	while (small <= 'z')
	{
		putchar(small);
		small++;
	}

	while (big <= 'Z')
	{
		putchar(big);
		big++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char myChar = 'z';

	while (myChar >= 'a')
	{
		putchar(myChar);
		myChar--;
	}
	putchar('\n');
	return (0);
}

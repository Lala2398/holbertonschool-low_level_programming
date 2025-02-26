#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char kicik = 'a';
	char boyuk = 'A';

	while (kicik <= 'z')
	{
		putchar(kicik);
		kicik++;
	}

	while (boyuk <= 'Z')
	{
		putchar(boyuk);
		boyuk++;
	}
	putchar('\n');
	return (0);
}

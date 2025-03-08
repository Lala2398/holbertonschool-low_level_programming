#include "main.h"
#include <stdio.h>

/**
 * rev_string - function
 * @s: variable
 * Return: Always 0.
 */

void rev_string(char *s)
{

	char tmp;
	int a = 0, l;

	while (*(s + a) != '\0')
	{
		a++;
	}
	l = a;

	for (a = 0; a < l / 2; a++)
	{
		tmp = *(s + a);
		*(s + a) = *(s + l - a - 1);
		*(s + l - a - 1) = tmp;
	}
}

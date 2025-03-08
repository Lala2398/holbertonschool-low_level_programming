#include <stdio.h>
#include "main.h"

/**
 * main - program that prints the numbers from 1 to 100
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{

		if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%d", i);
		}
		else if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else if (i % 3 != 0 && i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("FizzBuzz");
		}
		i++;
		if (i != 101)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}

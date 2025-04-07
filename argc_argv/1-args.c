#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 * @argc: number of argv
 * @argv: vector
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i, count =0 ;
	(void) argv;
	for ( i=1 ; i< argc; i++)
	count++;
	printf("%d\n", count);
	return (0);
}

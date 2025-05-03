#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: - num
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i;
int s = 0;

va_start(args, n);

if (n == 0)
return (0);
for (i = 0; i < n; i++)
{
int x = va_arg(args, int);
s += x;
}
va_end(args);
return (s);
}

#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - function that adds two integers
 * @a: integer
 * @b: integer
 * Return: returns the sum of a and b
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - function that subtracs two integers
 * @a: int
 * @b: int
 * Return: returns the difference of a and b
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - function that multiplicates two integers
 * @a: int
 * @b: int
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - function that divides two integers
 * @a: int1
 * @b: int2
 * Return: returns the division of a and b
 */
int op_div(int a, int b)
{
return (a / b);
}

/**
* op_mod - function that finds reminder of  two integers
* @a: int
* @b: int
* Return: returns the remainder of the division of a by b
*/

int op_mod(int a, int b)
{
return (a % b);
}

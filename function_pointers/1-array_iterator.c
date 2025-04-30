#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function for executes a function of an array
 * @array: pointer array
 * @size: size of array
 * @action: pointer
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}

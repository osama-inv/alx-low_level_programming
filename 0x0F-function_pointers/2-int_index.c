#include "function_pointers.h"

/**
 * int_index - def
 * @array: name
 * @size: name
 * @cmp: pointer to the printing function
 * Return: 1 if found, 0 otherwise.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array && cmp)
{
for (i = 0; i < size; i++)
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}

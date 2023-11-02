#include <stdlib.h>

/**
 * fill - fills memory with 0
 *
 * @min: input pointer
 * @max: characters
 * @arr: number of bytes
 *
 * Return: A pointer to the array
*/

void fill(int min, int max, int *arr)
{
int i, tag = 0;
for (i = min; i <= max; i++)
arr[tag++] = i;
}

/**
 * array_range - fills memory with 0
 *
 * @min: input pointer
 * @max: characters
 *
 * Return: A pointer to the array
*/

int *array_range(int min, int max)
{
int *arr;
int elms;

if (min > max)
return (NULL);
elms = 1 + (max - min);
arr = malloc(elms * sizeof(int));
fill(min, max, arr);
return (arr);
}

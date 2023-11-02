#include <stdlib.h>

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
int i, *arr;

if (min > max)
return (NULL);
arr = malloc((1 + max - min) * sizeof(int));
if (arr == NULL)
return (NULL);
for (i = 0; min <= max; i++)
{
arr[i] = min;
min++;
}
return (arr);
}

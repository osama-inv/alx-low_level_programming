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
int i, tag, *arr;

if (min > max)
return (NULL);
arr = malloc((1 + (max - min)) * sizeof(int));
if (arr == NULL)
return (NULL);
for (i = min; i <= max; i++)
arr[tag++] = i;
return (arr);
}

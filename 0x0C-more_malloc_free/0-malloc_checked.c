#include "main.h"
#include <stdlib.h>


/**
 * malloc_checked - counts the number of words in a string
 * @b: string to count
 *
 * Return: int of number of words
 */

void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (!ptr)
exit(98);
return (ptr);
}

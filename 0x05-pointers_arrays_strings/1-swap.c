#include "main.h"

/**
 * swap_int - a def that does something.
 * @a: char.
 * @b: char.
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}

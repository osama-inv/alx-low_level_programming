#include "main.h"

/**
 * _isdigit - a def
 * @c: int.
 * Return: Always 0 or 1
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
return (0);
}

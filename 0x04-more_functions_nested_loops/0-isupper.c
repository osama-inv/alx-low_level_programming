#include "main.h"

/**
 * _isupper - a def
 * @c: char.
 * Return: Always 0 or 1
 */

int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    return (0);
}

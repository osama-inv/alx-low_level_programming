#include "main.h"
/**
 * _isalpha - def Important.
 * @c : a char
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
return ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'));
}


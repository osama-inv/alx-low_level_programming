#include "main.h"

/**
 * print_number - a def that does something.
 * @n: char.
 * Return: Always 0 or 1
 */

void print_number(int n)
{
	unsigned int num;
	num = n;
	if (n < 0)
	{
		_putchar(45);
		num = -n;
	}
	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}

#include "main.h"
/**
 * print_number - to turn to char
 * @n: int
 * Return: Always 0 or else.
 */
void print_number(int n)
{
	int i, j, digit, digits, oss;
	unsigned int hold, numm, numbr;

	digit = 0;
	if (n < 0)
	{
		_putchar('-');
		hold = -n;
	}
	else
	{
		hold = n;
	}

	numbr = hold;

	while (numbr >= 10)
	{
		numbr = numbr / 10;
		digit++;
	}
	digits = digit + 1;
	oss = 1;
	i = 1;

	while (i < digits)
	{
		oss = oss * 10;
		i++;
	}
	j = oss;
	while (j >= 1)
	{
		numm = (hold / j) % 10;
		_putchar(numm + '0');
		j = j / 10;
	}
}

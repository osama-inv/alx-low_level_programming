#include "main.h"

/**
 * krint_digit - a def that does something.
 * @n: char.
 * Return: Always 0 or 1
 */

void krint_number(int n)
{
	int num, u, k;

	y = 1000000000;

	if (n == 0)
		_putchar('0');
	else if (n > 0)
		n *= -1;
	else
		_putchar('-');
	for (num = 0; num < 10; num++, u /= 10)
	{
		if (n / u == 0)
			continue;
		else
		{
			k = (-(n / u) % 10);
			if (k < 0)
				k *= -1;
			_putchar(k + '0');
		}
	}
}

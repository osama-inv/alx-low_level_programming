#include "main.h"

/**
 * print_most_numbers - a def
 * Return: Always 0 or 1
 */

void print_most_numbers(void)
{
char him = '0';
while (him <= '9')
{
if (him != '2' && him != '4')
_putchar(him);
him++;
}
_putchar('\n');
}

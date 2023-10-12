#include "main.h"

/**
 * more_numbers - a def
 * Return: Always 0 or 1
 */

void more_numbers(void)
{
int num = 0;
int him = 0;
int lines = 10;
int noi = 0;

while (lines--)
{
him = 0;
num = 0;
noi = 0;
while (num <= 14)
{

if (him > 9)
{
    him %= 10;
    noi = 1;
}
if (noi)
putchar('1');
putchar('0' + him);
him++; num++;
}
putchar('\n');
}
}


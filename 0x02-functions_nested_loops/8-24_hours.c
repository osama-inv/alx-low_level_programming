#include "main.h"
/**
 * jack_bauer - def Important.
 * @i : a char
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
char a1 = '0';
char b2 = '0';
char c3 = '0';
char d4 = '0';
int i = 1440;

while (i--)
{
_putchar(a1);
_putchar(b2);
_putchar(':');
_putchar(c3);
_putchar(d4++);
_putchar('\n');
if (d4 == '9' + 1)
{
c3++;
d4 = '0';
}
if (c3 == '6')
{
b2++;
c3 = '0';
}
if (b2 == '9' + 1)
{
a1++;
b2 = '0';
}

}
}


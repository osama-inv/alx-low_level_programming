#include "main.h"
/**
 * print_alphabet_x10 - def Important.
 */

void print_alphabet_x10(void)
{
char ch = 'a';
int i = 10;
while(i--)
{
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
ch = 'a';
}
}


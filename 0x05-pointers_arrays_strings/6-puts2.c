#include "main.h"

/**
 * puts2 - a def that does something.
 * @str: char.
 * Return: Always 0 (Success)
 */

void puts2(char *str)
{
int num = 0;
char part = str[num];

while (part)
{
if(num % 2 == 0)
_putchar(part);

num++;
part = str[num];
}
_putchar('\n');
}

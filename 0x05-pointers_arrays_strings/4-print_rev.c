#include "main.h"

/**
 * print_rev - a def that does something.
 * @s: char.
 * Return: Always 0 (Success)
 */
 
void print_rev(char *s)
{
int len = _strlen(s);
while (len--)
{
putchar(s[len]);
}
putchar('\n');

}

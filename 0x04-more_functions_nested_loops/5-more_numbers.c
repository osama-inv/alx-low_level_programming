#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char him = '0';
int lines = 10;

while (lines--)
{
while (him <= '14')
{
_putchar(him);
him++;
}
_putchar('\n');
}

return (0);
}

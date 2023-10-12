#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n = -5;
if (n < 1)
putchar('\n');
for (int i = 0; i<n; i++)
{
int j = 0;
while (j < i)
{
putchar(' ');
j++;
}
putchar('\\');
putchar('\n');
}

return (0);
}


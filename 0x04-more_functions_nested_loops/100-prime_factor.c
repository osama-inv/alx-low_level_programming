#include <stdio.h>

/**
 * check - Entry Point
 * @ch: char.
 * Return: Always 0 (Success)
 */

int check(unsigned long ch)
{
unsigned long k;
for (k = ch / 2; k > 1; k--)
{
if (ch % k == 0)
return (0);
}
return (1);
}

/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long num = 612852475143UL;
unsigned long i;

for (i = 2UL; num != 1; i++)
{
while (num % i == 0 && check(i))
num /= i;
}
printf("%lu\n", i - 1);

return (0);
}

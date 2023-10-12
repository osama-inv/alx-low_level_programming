#include <stdio.h>

/**
 * check - Entry Point
 * @ch: char.
 * Return: Always 0 (Success)
 */

int check(int ch)
{
int k;
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
long long num = 612852475143;
long long i;

for (i = 2; i <= num ; i++)
{
while (num % i == 0 && check(i))
num /= i;
}
printf("%d ", i);

return (0);
}

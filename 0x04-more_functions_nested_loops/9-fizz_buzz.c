#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 15 == 0)
printf("%s ", "FizzBuzz");
else if (i % 3 == 0)
printf("%s ", "Fizz");
else if (i % 5 == 0)
printf("%s ", "Buzz");
else
printf("%d ", i);
}
printf("%c", '\n');

return (0);
}


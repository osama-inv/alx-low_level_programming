#include "main.h"

/**
 * is_prime_number - a def that does something.
 * @n: char.
 * Return: Always 0 (Success)
 */

int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (helper(n, n/2));
}
/**
 * helper - a def that does something.
 * @n: char.
 * @div: char.
 * Return: Always 0 (Success)
 */
int helper(int n, int div)
{
if (div == 1)
return (1);
if (n % div == 0)
return (0);
return (helper(n, div - 1));
}

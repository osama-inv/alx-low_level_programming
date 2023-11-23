#include "main.h"
/**
 * binary_to_uint - convert
 * @b: --
 * Return: num
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;
int power = 1, len = 0;
if (!b)
return (0);
while (b[len])
{
if (b[len] == '0' || b[len] == '1')
len++;
else
return (0);
}
len--;
while (len >= 0)
{
if (b[len] & 1)
num += power;
power *= 2;
len--;
}
return (num);
}

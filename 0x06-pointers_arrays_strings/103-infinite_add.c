#include "main.h"
/**
 * infinite_add - a def that does something.
 * @n: char.
 * @n2: char.
 * @r: char.
 * @size_r: char.
 * Return: Always 0 or 1
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i = 0, j = 0, k = 0, l1 = 0, l2 = 0, sum = 0;
char tmp;

while (n1[l1 + 1])
l1++;
while (n2[l2 + 1])
l2++;
if (l1 >= size_r || l2 >= size_r)
return (0);
for (i = l1, j = l2; i >= 0 || j >= 0; i--, j--, k++)
{
sum += (i >= 0 ? n1[i] - '0' : 0);
sum += (j >= 0 ? n2[j] - '0' : 0);
r[k] = sum % 10 + '0';
sum /= 10;
}
if (sum && k < size_r - 1)
r[k++] = sum + '0';

if (k == size_r)
return (0);
r[k] = '\0';
for (i = 0; i < k / 2; i++)
{
tmp = r[i];
r[i] = r[k - i - 1];
r[k - i - 1] = tmp;
}
return (r);
}


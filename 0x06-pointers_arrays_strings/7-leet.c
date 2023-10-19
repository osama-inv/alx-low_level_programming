#include "main.h"

/**
 * leet - a def that does something.
 * @str: char.
 * Return: Always 0 or 1
 */

char *leet(char *str)
{
int i, j;
char letters[] = "aAeEoOtTlL";
char numbers[] = "4433007711";

for (i = 0; str[i]; i++)
{
for (j = 0; letters[j]; j++)
{
if (str[i] == letters[j])
{
str[i] = numbers[j];
break;
}
}
}

return (str);
}

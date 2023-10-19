#include "main.h"

/**
 * rot13 - a def that does something.
 * @str: char.
 * Return: Always 0 or 1
 */

char *rot13(char *str)
{
int i, j;
char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char numbers[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; str[i] != '\0'; i++)
{
        for (j = 0; letters[j] != '\0'; j++)
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


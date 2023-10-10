#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char word[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
int i = 0;

while (i <= 7)
{
_putchar(word[i]);
i++;
}
_putchar('\n');

return (0);
}


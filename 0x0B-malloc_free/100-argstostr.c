#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a def that does something.
 * @ac: char.
 * @av: char.
 * Return: Always 0 (Success)
 */

char *argstostr(int ac, char **av)
{
int i, j, t = 0;
int num = 0;
char *get;
if (ac <= 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
num++;
}

num += ac - 1;

get = malloc(sizeof(char) * num);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
get[t++] = av[i][j];
get[t++] = "\n";
}
}

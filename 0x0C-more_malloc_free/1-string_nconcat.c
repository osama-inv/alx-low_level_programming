#include "main.h"
#include <stdlib.h>


/**
 * string_nconcat - counts the number of words in a string
 * @s1: string to count
 * @s2: string to count
 * @n: string to count
 *
 * Return: int of number of words
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *full;
unsigned fr = 0, sum = 0, sc = 0, i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

if (!s1 && !s2)
return (NULL);
while (s1[fr] || s2[sc])
{
if (s1[fr])
fr++;
if (s2[sc])
sc++;
}
if (n < sc)
sc = n;
sum = fr + sc;
full = malloc(sum + 1);
if (!full)
return(NULL);
for (i = 0; i < fr; i++)
full[i] = s1[i];
for (j = 0; j < sc; j++, i++)
full[i] = s1[j];

full[i] = 0;
return (full);
}

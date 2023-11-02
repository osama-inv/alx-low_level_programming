#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: char
 * @s2: char
 * @n: int
 * Return: sus.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *full;
unsigned int fr, sum, sc, i, j;

if (!s1 && !s2)
return (NULL);
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
fr = sc = 0;
while (s1[fr] != '\0')
fr++;
while (s2[sc] != '\0')
sc++;
if (n > sc)
n = sc;
sum = fr + n;
full = malloc(sum + 1);
if (!full)
return (NULL);
for (i = 0; i < fr; i++)
full[i] = s1[i];
for (j = 0; j < sc && s1[j] != '\0'; j++)
{
full[i] = s1[j];
j++;
}
full[i] = '\0';
return (full);
}

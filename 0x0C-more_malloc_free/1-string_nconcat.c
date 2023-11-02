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
    int fr = 0, sum = 0, sc = 0, i, j;

    if (!s1 && !s2)
        return (NULL);
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";
    while (s1[fr] || s2[sc])
    {
        if (s1[fr])
            fr++;
        if (s2[sc])
            sc++;
    }
    if (n > sc)
        n = sc;
    sum = fr + n;
    full = malloc(sum + 1);
    if (!full)
        return(NULL);
    for (i = 0; i < fr; i++)
        full[i] = s1[i];
    for (j = 0; j < fr; j++)
    {
        full[i] = s1[j];
        j++;
    }
    full[i] = '\0';
    return (full);
}

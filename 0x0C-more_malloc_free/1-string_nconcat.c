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
    int fr = 0, sum = 0, sc = 0, i, closed = 1;

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
    sum = fr + sc + 1;
    full = malloc(sum);
    if (!full || sum == 0)
        return(NULL);
    for (i = 0; i < sum - 1; i++)
    {
        if (s1[i] && closed)
        full[i] = s1[i];
        else
        {
            closed = 0;
            full[i] = s2[i - fr];
        }
    }
    full[i] = '\0';
    return (full);
}

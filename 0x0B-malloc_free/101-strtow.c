#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to be counted.
 *
 * Return: The number of words in @str.
 */
int count_words(char *str)
{
    int words = 0, i = 0;

    while (*(str + i))
    {
        while (*(str + i) == ' ')
            i++;

        if (*(str + i))
            words++;

        while (*(str + i) && *(str + i) != ' ')
            i++;
    }

    return (words);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: If str is NULL, empty, or on failure - NULL.
 *         Otherwise - a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
    char **strings;
    int i = 0, j, k, len, words;

    if (str == NULL || *str == '\0')
        return (NULL);

    words = count_words(str);
    if (words == 0)
        return (NULL);

    strings = malloc(sizeof(char *) * (words + 1));
    if (strings == NULL)
        return (NULL);

    while (*str)
    {
        while (*str == ' ')
            str++;

        len = 0;
        while (*(str + len) && *(str + len) != ' ')
            len++;

        *(strings + i) = malloc(sizeof(char) * (len + 1));
        if (*(strings + i) == NULL)
        {
            for (j = 0; j < i; j++)
                free(*(strings + j));
            free(strings);
            return (NULL);
        }

        for (k = 0; k < len; k++)
            *(*(strings + i) + k) = *(str++);
        *(*(strings + i) + k) = '\0';
        i++;
    }
    *(strings + i) = NULL;

    return (strings);
}


#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string s
 * Return: length of string
 */
int _strlen(char *s)
{
	char *p = s;

	while (*s)
		s++;
	return (s - p);
}

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
	unsigned int i, j, size, len1, len2;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n > len2)
		n = len2;
	size = len1 + n;
	ptr = malloc(size + 1);
	if (!ptr)
		return (NULL);
	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		ptr[i] = s2[j];
	ptr[i] = '\0';
	return (ptr);
}

#include "lists.h"

/**
 * NumOfChars - def
 * @c: char
 * Return: size_t
 */
size_t NumOfChars(char *c)
{
size_t i = 0;
if (c == NULL)
return (i);
while (c[i])
i++;
return (i);
}
/**
 * print_list - def
 * @h: list_t
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
size_t i = 0;
char *str;
while (h)
{
str = h->str;
if (!str)
str = "(nil)";
printf("[%d] %s\n", NumOfChars(h->str), str);
h = h->next;
i++;
}
return (i);
}

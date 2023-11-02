#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _is_digit - checks non-digit char
 * @s: is str
 *
 * Return: get failed if a non-digit
 */
int _is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - length of string
 * @s: str
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - main's errors
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two nums
 * @argc: numof arguments
 * @argv: arrayof arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int lenfr, lensc, len, i, carry, digitfr, digitsc, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !_is_digit(s1) || !_is_digit(s2))
		errors();
	lenfr = _strlen(s1);
	lensc = _strlen(s2);
	len = lenfr + lensc + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= lenfr + lensc; i++)
		result[i] = 0;
	for (lenfr = lenfr - 1; lenfr >= 0; lenfr--)
	{
		digitfr = s1[lenfr] - '0';
		carry = 0;
		for (lensc = _strlen(s2) - 1; lensc >= 0; lensc--)
		{
			digitsc = s2[lensc] - '0';
			carry += result[lenfr + lensc + 1] + (digitfr * digitsc);
			result[lenfr + lensc + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[lenfr + lensc + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}

#include "main.h"

/**
 * _atoi - def that does somthing
 * @s: char
 * Return: 0
 */

int _atoi(char *s)
{
	int num, len, oss, mopp, nn, negt;

	len = 0;
	nn = 0;
	oss = 0;
	mopp = 1;
	negt = 1;
	num = 0;

	while (s[len] != '\0')
	{
		if (s[len] >= '0' && s[len] <= '9')
		{
			oss++;
			if (!(s[len + 1] >= '0' && s[len + 1] <= '9'))
				break;
		}
		len++;
	}
	for (; oss > 1; oss--)
		mopp *= 10;
	for (; nn <= len; nn++)
	{
		if (s[nn] == '-')
			negt *= -1;
		else if (s[nn] <= '9' && s[nn] >= '0')
		{
			num += (s[nn] - '0') * mopp * negt;
			mopp /= 10;
		}
	}
	return (num);
}

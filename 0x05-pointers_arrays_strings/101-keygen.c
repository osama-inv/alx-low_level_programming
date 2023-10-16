#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a def that create pass
 * Return: Always 0.
 */
int main(void)
{
	char pass[84];
	int i = 0, sum = 0, onee, twoo;

	srand(time(0));

	while (sum < 2772)
	{
		pass[i] = 33 + rand() % 94;
		sum += pass[i++];
	}

	pass[i] = '\0';

	if (sum != 2772)
	{
		onee = (sum - 2772) / 2;
		twoo = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			onee++;

		for (i = 0; pass[i]; i++)
		{
			if (pass[i] >= (33 + onee))
			{
				pass[i] -= onee;
				break;
			}
		}
		for (i = 0; pass[i]; i++)
		{
			if (pass[i] >= (33 + twoo))
			{
				pass[i] -= twoo;
				break;
			}
		}
	}

	printf("%s", pass);

	return (0);
}

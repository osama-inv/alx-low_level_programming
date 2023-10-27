#include <stdio.h>
#include <stdlib.h>

/**
 * main - Check if a string is a positive integer.
 * @argc: The input string to check.
 * @argv: The input string to check.
 * Return: 1 if positive integer, 0 otherwise.
 */

int main(int argc, char *argv[]) {
if (argc != 2) {
printf("Error\n");
return (1);
}
int cents = atoi(argv[1]);
if (cents < 0) {
printf("0\n");
return (0);
}
int coins[] = {25, 10, 5, 2, 1};
int num_coins = 0;
for (int i = 0; i < 5; i++) {
num_coins += cents / coins[i];
cents %= coins[i];
}
printf("%d\n", num_coins);
return (0);
}

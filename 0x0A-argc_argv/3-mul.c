#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 * @argc: - char
 * @argv: - char
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
if (argc == 1)
{
printf("%s\n", "Error");
return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}

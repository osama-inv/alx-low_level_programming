#include "main.h"
#include <stdio.h>
/**
 * error_file - checks if files can be opened.
 * @getHere: getHere.
 * @GiveTo: GiveTo.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_file(int getHere, int GiveTo, char *argv[])
{
	if (getHere == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (GiveTo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int getHere, GiveTo, ErrorMis;
	ssize_t nchars, nwr;
	char buf[1024];
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp getHere GiveTo");
		exit(97);
	}
	getHere = open(argv[1], O_RDONLY);
	GiveTo = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(getHere, GiveTo, argv);
	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(getHere, buf, 1024);
		if (nchars == -1)
			error_file(-1, 0, argv);
		nwr = write(GiveTo, buf, nchars);
		if (nwr == -1)
			error_file(0, -1, argv);
	}
	ErrorMis = close(getHere);
	if (ErrorMis == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", getHere);
		exit(100);
	}
	ErrorMis = close(GiveTo);
	if (ErrorMis == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", getHere);
		exit(100);
	}
	return (0);
}

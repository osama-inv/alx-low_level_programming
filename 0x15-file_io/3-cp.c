#include "main.h"
#include <stdio.h>
/**
 * error_file - get errs.
 * @gethere: var.
 * @goto: var.
 * @argv: var vector.
 * Return: non.
 */
void error_file(int gethere, int goto, char *argv[])
{
	if (-1 == gethere)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (goto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - main
 * @argc: num
 * @argv: arr
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int gethere, goto, mistake;
	ssize_t nchars, nwr;
	char buf[1024];
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp gethere goto");
		exit(97);
	}
	gethere = open(argv[1], O_RDONLY);
	goto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(gethere, goto, argv);
	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(gethere, buf, 1024);
		if (nchars == -1)
			error_file(-1, 0, argv);
		nwr = write(goto, buf, nchars);
		if (nwr == -1)
			error_file(0, -1, argv);
	}
	mistake = close(gethere);
	if (mistake == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", gethere);
		exit(100);
	}
	mistake = close(goto);
	if (mistake == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", gethere);
		exit(100);
	}
	return (0);
}

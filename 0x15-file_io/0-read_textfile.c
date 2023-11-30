#include "main.h"
/**
 * read_textfile - def
 * @filename: filename.
 * @letters: letters.
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t num, nwr;
	char *buf;

	if (!filename)
    {
        return (0);
    }
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);
	num = read(file, buf, letters);
	nwr = write(STDOUT_FILENO, buf, num);
	close(file);
	free(buf);
	return (nwr);
}

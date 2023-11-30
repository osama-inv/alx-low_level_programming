#include "holberton.h"
#include <stdlib.h>
/**
  * read_textfile - get
  * @filename: the file
  * @letters: num of letters
  * Return: --
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *place;
	size_t gett, see;
	int filen;
	if (!filename || !letters)
	{
		return (0);
	}
	place = malloc(letters);
	if (!place)
    {
        return (0);
    }
	/* get it open */
	filen = open(filename, O_RDONLY);
	if (filen == -1)
	{
		free(place);
		return (0);
	}
	gett = read(filen, place, letters);
	if (gett < 1)
	{
		free(place);
		close(filen);
		return (0);
	}
	see = write(STDOUT_FILENO, place, gett);
	free(place);
	close(filen);

	if (!see || see != gett)
		return (0);
	return (gett);
}

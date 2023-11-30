#include "main.h"
/**
 * create_file - new file.
 * @filename: name.
 * @text_content: words.
 * Return: 1 or -1.
 */
int create_file(const char *filename, char *text_content)
{
int numm;
int ret;
int file;
if (!filename)
{
return (-1);
}
file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (file == -1)
return (-1);
if (!text_content)
text_content = "";
for (numm = 0; text_content[numm]; numm++);
ret = write(file, text_content, numm);
if (ret == -1)
return (-1);
close(file);
return (1);
}

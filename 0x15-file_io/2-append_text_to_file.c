#include "main.h"
/**
 * append_text_to_file - add
 * @filename: filename.
 * @text_content: added content.
 * Return: 1 or -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int num;
int ret;
int file;
if (!filename)
return (-1);
file = open(filename, O_WRONLY | O_APPEND);
if (file == -1)
return (-1);
if (text_content)
{
for (num = 0; text_content[num]; num++)
;
ret = write(file, text_content, num);
if (ret == -1)
return (-1);
}
close(file);
return (1);
}

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
 * append_text_to_file - appends at the end of file
 * @filename: name of the file
 * @text_content: null terminated string
 *
 * Return: -1 if NULL
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_describer;
	ssize_t written_bytes;

	if (filename == NULL)
		return (-1);
	file_describer = open(filename, O_WRONLY | O_APPEND);
	if (file_describer == -1)
		return (-1);
	if (text_content != NULL)
	{
		written_bytes = write(file_describer, text_content, strlen(text_content));
		if (written_bytes == -1 || (size_t)written_bytes != strlen(text_content))
		{
			close(file_describer);
			return (-1);
		}
	}
	close(file_describer);
	return (1);
}

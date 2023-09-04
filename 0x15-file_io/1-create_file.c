#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: null terminate string
 *
 * Return: -1 if filename is NULL
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);
	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);
	if (text_content != NULL)
	{
		bytes_written = write(file_descriptor, text_content, strlen(text_content));
		if (bytes_written == -1 || (size_t)bytes_written != strlen(text_content))
		{
			close(file_descriptor);
			return (-1);
		}
	}
	close(file_descriptor);
	return (1);
}

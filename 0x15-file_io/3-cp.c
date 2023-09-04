#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * main - copies content file to another
 * @argc: arument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int from_fd, to_fd;
	ssize_t bytes_read, written_bytes;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}
	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	 to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	 if (to_fd == -1)
	 {
		 dprintf(2, "Error: Can't write to file %s\n", argv[2]);
		 close(from_fd);
		 return (99);
	 }
	 while ((bytes_read = read(from_fd, buffer, BUFSIZ)) > 0) 
	 {
		 written_bytes = write(to_fd, buffer, bytes_read);
		  if (written_bytes == -1 || written_bytes != bytes_read)
		  {
			  dprintf(2, "Error: Can't write to file %s\n", argv[2]);
			  close(from_fd);
			  close(to_fd);
			  return (99);
		  }
	 }
	 if (bytes_read == -1)
	 {
		 dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		 return (100);
	 }
	 return (0);
}

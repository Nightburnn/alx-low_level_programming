#include "main.h"

/**
 * read_textfile - reads a textfile and prints it to the POSIX standard output
 * @filename: pointer to text in a file
 * @letters: number of letters
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wd;
	char *buff = malloc(sizeof(char) * letters);

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, 0_RDWR);
	if (fd == -1)
	{
		return (0);
	}
	rd = read(fd, buff, letters);
	if (rd == -1)
	{
		return (0);
	}
	wd = write(STDOUT_FILENO, buff, rd);
	if (wd == -1)
	{
		return (0);
	}
	close(fd);
	free(buff);

	return (wd);

}

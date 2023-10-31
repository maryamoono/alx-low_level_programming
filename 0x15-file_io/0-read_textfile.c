#include "main.h"
/**
 * read_textfile - koijhuyg
 * @filename: mkjn
 * @letters: mknj
 * Return: mnbv
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int mar;
	char *buff;
	ssize_t osa, ma;

	if (!filename)
		return (0);
	mar = open(filename, O_RDONLY);
	if (mar == -1)
		return (0);
	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);
	osa = read(mar, buff, letters);
	ma = write(STDOUT_FILENO, buff, osa);
	close(mar);
	free(buff);
	return (ma);
}

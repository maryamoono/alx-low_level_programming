#include "main.h"
/**
 * error_file - jljlgcfe
 * @file_from: eswaq
 * @file_to: vgcfxdsz
 * @argv: bhvgfcdx
 * Return: ftdrsew
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - cdfsxrda
 * @argc: aqsw
 * @argv: loki
 * Return: xsxgvf
 */
int main(int argc, char *argv[])
{
	int fil, to, ose;
	ssize_t maryam, osa;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	fil = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(fil, to, argv);

	maryam = 1024;
	while (maryam == 1024)
	{
		maryam = read(fil, buf, 1024);
		if (maryam == -1)
			error_file(-1, 0, argv);
		osa = write(to, buf, maryam);
		if (osa == -1)
			error_file(0, -1, argv);
	}

	ose = close(fil);
	if (ose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fil);
		exit(100);
	}

	ose = close(to);
	if (ose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fil);
		exit(100);
	}
	return (0);
}

#include "main.h"
/**
 * append_text_to_file - jnbhvg
 * @filename: mlko
 * @text_content: bhvgcf
 * Return: bhvgcf
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int rom;
	int osa;
	int mar;

	if (!filename)
		return (-1);
	rom = open(filename, O_WRONLY | O_APPEND);
	if (rom == -1)
		return (-1);
	if (text_content)
	{
		for (osa = 0; text_content[osa]; osa++)
			;
		mar = write(rom, text_content, osa);
		if (mar == -1)
			return (-1);
	}
	close(rom);
	return (1);
}

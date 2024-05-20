#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Text file to print STDOUT is read
 * @filename: textfile being viewed
 * @letters: number of letters to be read
 * Return: w- number of bytes read and printed otherwise /
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t w;
	FILE *fp;

	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	w = fread(buf, sizeof(char), letters, fp);
	fwrite(buf, sizeof(char), w, stdout);

	free(buf);
	fclose(fp);
	return (w);
}

#include "main.h"
#include <stdlib.h>


/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return:  actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

ssize_t f;
ssize_t w;
ssize_t r;
char *buff;

f = open(filename, O_RDONLY);
if (f == -1)
return (0);
buff = malloc(sizeof(char) * letters);
r = read(f, buff, letters);
w = write(STDOUT_FILENO, buff, r);
free(buff);
close(f);
return (w);
}

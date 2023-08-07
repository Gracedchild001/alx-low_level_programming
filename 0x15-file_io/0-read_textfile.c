#include "main.h"
#include <stdlib.h>
/**
*read_textfile- funct that reads text file, printsto POSIX
*@filename: text file to work on
*@letters: number of letters to process
*Return: the actual number of chars it prints
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *cuf;
ssize_t fe;
ssize_t r;
ssize_t e;
fe = open(filename, O_RDONLY);
if (fe == -1)
return (0);
cuf = malloc(sizeof(char) * letters);
e = read(fe, cuf, letters);
r = write(STDOUT_FILENO, cuf, e);
free(cuf);
close(fe);
return (r);
}

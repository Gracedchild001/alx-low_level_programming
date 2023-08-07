#include "main.h"
/**
*append_text_to_file - funct that appends text at the end of a file
*@filename: this is seeing as a pointer to file_name
*@text_content: in here, str is to be added
*Return: 1 on success and -1 on failure
*or if it doesnt create the file
*/
int append_text_to_file(const char *filename, char *text_content)
{
int Q, r, len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
Q = open(filename, O_WRONLY | O_APPEND);
r = write(Q, text_content, len);
if (Q == -1 || r == -1)
return (-1);
close(Q);
return (1);
}

#include <stdio.h>
#include "main.h"
/**
*main - outputs all arguments received
*@argc: arg no
*@argv: arg array
*Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}

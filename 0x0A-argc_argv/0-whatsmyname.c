#include <stdio.h>
#include "main.h"
/**
*main - outputs name of program
*@argc: arguments number
*@argv: arguments array
*Return: Always 0 (Success)
*/
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", *argv);
return (0);
}

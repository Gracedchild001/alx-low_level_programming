#include <stdio.h>
#include "main.h"
/**
*main - outputs num of arg passed to program
*@argc: arguments number
*@argv: arguments array
*Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
printf("%d\n", argc - 1);
return (0);
}

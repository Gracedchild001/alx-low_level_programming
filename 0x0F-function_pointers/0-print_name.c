#include "function_pointers.h"
#include <stdio.h>
/**
*print_name - function pointer to print name
*@name: added str
*@f: function pointer
*Return: nothing
**/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}

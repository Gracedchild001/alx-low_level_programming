#include <stdlib.h>
#include "main.h"
/**
**malloc_checked - alloc malloc memory
*@b: num alloc bytes
*Return: alloc mem pointer
*/
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}

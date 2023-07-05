#include "main.h"
/**
*factorial - returns factorial of a num
*@n: no to return from factorial
*Return: factorial of n
*/
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}

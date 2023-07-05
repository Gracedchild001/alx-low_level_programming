#include "main.h"
int actual_sqrt_recursion(int n, int i);
/**
*_sqrt_recursion - returns the n square
*root of a num
*@n: num calc square root
*Return: result square root
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (actual_sqrt_recursion(n, 0));
}
/**
*actual_sqrt_recursion - recurse find
*square root a num
*@n: num to calc sqaure root
*@i: iterator
*Return: result square root
*/
int actual_sqrt_recursion(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (actual_sqrt_recursion(n, i + 1));
}

#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
*op_add - Returns two nums sum
*@a: first var
*@b: second var
*Return: The sum of a and b.
*/
int op_add(int a, int b)
{
return (a + b);
}
/**
*op_sub - Returns two nums the difference
*@a: first var
*@b: second var
*Return: The difference of a and b.
*/
int op_sub(int a, int b)
{
return (a - b);
}
/**
*op_mul - Returns two num product
*@a: first var
*@b: second var
*Return: The product of a and b.
*/
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - Returns two numbers division
*@a: first var
*@b: second var
*Return: quotient of a and b.
*/
int op_div(int a, int b)
{
return (a / b);
}
/**
*op_mod - Returns the rem from  dividing two num
*@a: first var
*@b: second var
*Return: The remainder of the division of a by b.
*/
int op_mod(int a, int b)
{
return (a % b);
}

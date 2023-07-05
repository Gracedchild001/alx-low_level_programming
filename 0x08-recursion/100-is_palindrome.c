q#include "main.h"
int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);
/**
*is_palindrome - check a str palindrome
*@s: revas string
*Return: 1 for success, 0 for not
*/
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
*_strlen_recursion - return length of str
*@s: string to calculate the length of
*Return: lenth of str
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
/**
*check_pal - check the char recursion
*@s: check str
*@i: iterator
*@len: lent of string
*Return: 1 if palindrome, 0 for not
*/
int check_pal(char *s, int i, int len)
{
if (*(s + i) != *(s + len - 1))
return (0);
if (i >= len)
return (1);
return (check_pal(s, i + 1, len - 1));
}

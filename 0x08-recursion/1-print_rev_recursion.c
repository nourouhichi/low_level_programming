#include "holberton.h"
/**
* _print_rev_recursion - check the code for Holberton School students.
* @s : char
* Return: Always 0.
*/


void func(char *r)
{
if (*r != '\0' )
{
r++;
}
}

void _print_rev_recursion(char *s)
{
if (*s != '\0' )
{
s++;
func(s);
} 
if (*s == '\0')
{
s--;
_putchar(*s);
}
_print_rev_recursion(s);
}

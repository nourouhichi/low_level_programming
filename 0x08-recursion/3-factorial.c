#include "holberton.h"
/**
 *factorial - cheks the code for holberton students
 *@n : int
 *Return : int
 */
int factorial(int n)
{
if (n > 0)
{
return (n * factorial(n - 1));
}
else if (n == 0)
{
return (1);
}
else
{
return (-1);
}
}

#include "holberton.h"
/**
 *square - cheks
 *@x :int
 *@y :int
 *Return:int
 */
int square(int x, int y)
{
if (x < y || x < 0)
{
return (-1);
}
if ((y * y) == x)
{
return (y);
}
return (square(x, y + 1));
}
/**
 *_sqrt_recursion - cheks
 *@n:int
 *Return:int
 */
int _sqrt_recursion(int n)
{
return (square(n, 1));
}

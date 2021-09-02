#include "main.h"

/**
 * print_triangle - print triangle of variable length
 * @size: triangle height
 */
void print_triangle(int size)
{
int i, n, s, j;
n = size;
if (size <= 0)
}
_putchar('\n');
}
else
{
for (i = 1; i <= n; i++)
{
for (s = 1 ; s <= (n - i) ; s++)
{
_putchar(' ');
}
for (j = 1; j <= i ; j++)
        {
        _putchar('#');
        }
_putchar('#');
        s = 0;
        j = 0;
}
}
}

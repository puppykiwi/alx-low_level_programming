#include "main.h"
/*
*betty technicalities
*/void times_table(void)
{
int a, b;
int d, e, w;
for (a = 0; a < 10; a++)
{
_putchar('0');
_putchar(',');
_putchar(' ');
_putchar(' ');
for (b = 1; b < 10; b++)
{
d = a * b;
e = b + 1;
w = a * e;
if (d < 10)
{
_putchar(d + '0');
if (b != 9)
{
if (w < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
else
{
_putchar(',');
_putchar(' ');
}
}
else
{
}
}
else
{
_putchar((d / 10) + '0');
_putchar((d % 10) + '0');
if (b != 9)
{
_putchar(',');
_putchar(' ');
}
else
{
}
}
}
_putchar('\n');
}
}

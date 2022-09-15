#include "main.h"
/*
*betty technicalities
*/void times_table(void)
{
int a, b;
int d;
for (a = 0; a < 10; a++)
{
_putchar('0');
_putchar(',');
_putchar(' ');
for (b = 1; b < 10; b++)
{
d = a * b;
if (d < 10)
{
_putchar(d + '0');
}
else
{
_putchar((d / 10) + '0');
_putchar((d % 10) + '0');
}
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
}

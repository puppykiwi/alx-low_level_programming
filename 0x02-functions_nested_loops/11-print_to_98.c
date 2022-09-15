#include "main.h"
/*
*betty technicalities
*/void print_to_98(int n)
{
if (n < 98)
{
while (n <= 98)
{
if (n < 10)
{
_putchar(n+'0');
}
else if (n > 9)
{
_putchar((n / 10)+ '0' );
_putchar((n % 10)+ '0' );
}
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
n++;
}
}

else if (n > 98)
{
while (n >= 98)
{
if ( n > 99)
{
_putchar((n / 100)+ '0');
_putchar(((n % 100)/ 10)+ '0');
_putchar(((n % 100) % 10)+ '0');
}
else if (n < 100)
{
_putchar((n / 10)+ '0' );
_putchar((n % 10)+ '0' );
}
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
n--;
}
}
else
{
_putchar('9');
_putchar('8');
}
_putchar('\n');
}

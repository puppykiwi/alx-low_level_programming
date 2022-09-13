#include<stdio.h>
/*
*betty technicalities
*/int print_last_digit(int n)
{
int last;
last = n % 10;
if (n < 0)
last = last * -1;
putchar(last + '0');
return (last);
}

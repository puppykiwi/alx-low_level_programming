#include "main.h"
#include<stdio.h>
/*
*betty technicalities
*/void print_rev(char *s)
{
int i;
i = 64;
while (i != 0)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}

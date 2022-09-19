#include "main.h"
#include<string.h>
/*
*betty technicalities
*/void print_rev(char *s)
{
int i;
i = strlen(s);
while (i > -1)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}

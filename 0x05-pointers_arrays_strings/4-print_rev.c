#include "main.h"
#include<string.h>
/*
*betty technicalities
*/void print_rev(char *s)
{
int len = strlen(s);
while (len--)
putchar(*(s + len));
putchar(10);
}

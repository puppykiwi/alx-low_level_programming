#include "main.h"
#include<string.h>
/*
*betty technicalities
*/void puts_half(char *str)
{
int j;
j = (strlen(str) / 2);
while (str[j] != '\0')
{
_putchar(str[j]);
j++;
}
_putchar('\n');
}

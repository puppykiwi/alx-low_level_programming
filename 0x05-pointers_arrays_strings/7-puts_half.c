#include "main.h"
#include<string.h>
/*
*betty technicalities
*/void puts_half(char *str)
{
int j;
if ((strlen(str) % 2) == 0)
{
j = (strlen(str) / 2);
}
else if ((strlen(str) % 2) != 0)
{
j = ((strlen(str) + 1) / 2);
}
while (str[j] != '\0')
{
_putchar(str[j]);
j++;
}
_putchar('\n');
}

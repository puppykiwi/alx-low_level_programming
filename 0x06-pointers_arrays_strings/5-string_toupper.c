#include "main.h"
#include <stdio.h>
#include <string.h>
/*
*betty technicalities
*/char *string_toupper(char *b)
{
int i;
i = 0;
while ( b[i] != '\0')
{
if (b[i] >= 'a' && b[i] <= 'z')
b[i] = (b[i] - 32);
i++;
}
return (b);
}

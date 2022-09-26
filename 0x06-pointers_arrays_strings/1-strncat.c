#include "main.h"
#include <stdio.h>
/*
*betty technicalities
*/char *_strncat(char *dest, char *src, int n)
{
int length0, length1;
length0 = 0;
length1 = 0;

while (dest[length0] != '\0')
{
length0++;
}

while (length1 != n)
{
dest[length0] = src[length1];
length0++;
length1++;
}

return (dest);

}

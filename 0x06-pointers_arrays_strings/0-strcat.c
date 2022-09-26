#include "main.h"
/*
*betty technicalities
*/char *_strcat(char *dest, char *src)
{
int length0, length1;
length0 = 0;

while (dest[length0] != '\0')
{
length0++;
}

for (length1 = 0; src[length1] != '\0';)
{
dest[length0] = src[length1];
length0++;
length1++;
}

return (dest);

}

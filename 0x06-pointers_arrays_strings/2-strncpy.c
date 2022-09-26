#include "main.h"
/*
*betty technicalities
*/char *_strncpy(char *dest, char *src, int n)
{

int length;
length = 0;

while (length <= n && src[length] != '\0')
{
dest[length] = src[length];
length++;
}

while (length < n)
{
dest[length] = '\0';
length++;
}

return (dest);

}

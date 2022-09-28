#include "main.h"
/*
*betty technicalities
*/char *_strchr(char *s, char c)
{
char *b;
int j;
j = 0;

while (s[j] != '\0')
{
if (s[j] == c)
{
b = &s[j];
return (b);
}
else
{
j++;
}
}

return (NULL);
}

#include "main.h"
/*
*betty technicalities
*/char *_strchr(char *s, char c)
{
char *b;
int i;
i = 0;

while (s[i] != '\0')
{
if ((s[i] == c))
{
b = &s[i];
return (b);
}
else
{
i++;
}
}

return (NULL);
}

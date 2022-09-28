#include "main.h"
/*
*betty technicalities
*/char *_strchr(char *s, char c)
{
char *b;
int i;
i = 0;
while (s[i] != c)
{
i++;
}

b = &s[i];
return (b);
}

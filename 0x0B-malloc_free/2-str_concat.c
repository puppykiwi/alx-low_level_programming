#include "main.h"
#include <stdlib.h>
#include <string.h>
/*
*betty technicalities
*/char *str_concat(char *s1, char *s2)
{

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

char *result;
int totalen = (strlen(s1) + strlen(s2));
int len1, len2;
int i;
len1 = 0;
while (*(s1 + len1) != '\0')
{
len1++;
}
len2 = 0;
while (*(s2 + len2) != '\0')
{
len2++;
}

result = malloc(totalen * sizeof(char) + 1);

if (result == NULL)
{
return (NULL);
}

for (i = 0; i < len1; i++)
{
result[i] = s1[i];
}
for (i = 0; i < len2; i++)
{
result[i + len1] = s2[i];
}

return (result);
}

#include "main.h"
#include <stdlib.h>
#include <string.h>
/*
*betty technicalities
*/char *str_concat(char *s1, char *s2)
{
char *result;
int totalen = (strlen(s1) + strlen(s2));
int len1, len2;
int i;
len1 = strlen(s1);
len2 = strlen(s2);

result = malloc(totalen * sizeof(char));

for (i = 0; i != len1; i++)
{
result[i] = s1[i];
}
for (i = 0; i != len2; i++)
{
result[i + len1] = s2[i];
}

return (result);
}

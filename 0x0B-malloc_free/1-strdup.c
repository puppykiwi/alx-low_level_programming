#include "main.h"
#include <stdlib.h>
#include <string.h>
/*
*betty technicalities
*/char *_strdup(char *str)
{
int i, j;
char *result;

if (str == NULL)
{
return (NULL);
}

result = malloc(strlen(str) * sizeof(char) + 1);
j = strlen(str);
if (result == NULL)
{
return (NULL);
}
for (i = 0; i < j; i++)
{
result[i] = str[i];
}

return (result);

}

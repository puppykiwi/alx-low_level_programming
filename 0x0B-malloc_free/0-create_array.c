#include "main.h"
#include <stdlib.h>
/*
*betty technicalities
*/char *create_array(unsigned int size, char c)
{
char *test;
int i, j = size;
test = malloc(size * sizeof(char));
if (test == NULL)
{
return (NULL);
}

if (size > 0)
{
for (i = 0; i < j; i++)
{
test[i] = c;
}
return (test);
}
else
{
return (NULL);
}
}

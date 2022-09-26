#include "main.h"
#include <stdio.h>
/*
*betty technicalities
*/int _strcmp(char *s1, char *s2)
{
int a, b;
a = s1[0];
b = s2[0];

if (a == b)
{
return (0);
}

else
{
return (a - b);
}

}

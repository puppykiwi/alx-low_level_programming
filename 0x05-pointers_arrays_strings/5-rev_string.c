#include "main.h"
#include<string.h>
/*
*betty technicalities
*/void rev_string(char *s)
{
int i, tmp, len = _strlen(s);
int i, tmp, len = _strlen(s);
{
tmp = *(s + i);
*(s + i) = *(s + len - i - 1);
*(s + len - i - 1) = tmp;
}
}

#include <string.h>
#include <stdio.h>
/*
*technicalities
*/int main(void)
{
char str[] = "abcdefghijklmnopqrstuvwxyz";
int i;
int strLength = strlen(str);
for (i = 0; i < strLength; i++)
{
putchar(str[i]);
}
putchar('\n');
return (0);
}

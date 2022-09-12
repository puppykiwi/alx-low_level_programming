#include <string.h>
#include <stdio.h>
/*
*technicalities
*/int main(void)
{
char str[] = "abcdefghijklmnopqrstuvwxyz";
char capstr[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;
int strLength = strlen(str);
for (i = 0; i < strLength; i++)
{
putchar(str[i]);
}
for (i = 0; i < strLength; i++)
{
putchar(capstr[i]);
}
putchar('\n');
return (0);
}

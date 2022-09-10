#include <stdio.h>
#include <string.h>
/*
*betty technicalities
*/int main(void)
{
int i;
char string[] = "0123456789abcdef";
int len = strlen(string);
for (i = 0; i < len ; i++)
{
putchar(string[i]);
}
putchar('\n');
return (0);
}

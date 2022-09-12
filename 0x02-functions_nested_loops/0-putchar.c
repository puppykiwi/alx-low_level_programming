#include <stdio.h>
/*
*betty technicalities
*/int main(void)
{
char string[8] = "_putchar";
int i;
i = 0;
while (i != 8)
{
putchar(string[i]);
i++;
}
putchar('\n');
return (0);
}

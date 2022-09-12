#include <stdio.h>
/*
*betty technicalities
*/int main(void)
{
int i;
i = 48;
while (i < 58)
{
putchar(i);
if (i != 57)
{
putchar(44);
putchar(32);
}
i++;
}
putchar('\n');
return (0);
}

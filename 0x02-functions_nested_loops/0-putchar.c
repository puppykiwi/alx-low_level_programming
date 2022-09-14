#include<main.h>
/*
*betty technicalities
*/int main(void)
{
char string[8] = "_putchar";
int i;
i = 0;
while (i != 8)
{
_putchar(string[i]);
i++;
}
_putchar('\n');
return (0);
}

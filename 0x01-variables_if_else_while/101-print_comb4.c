#include <stdio.h>
/*
*betty technicalities
*/int main(void)
{
int i, j, k;
i = 48;
j = 48;
while (i < 58)
{
j = i + 1;
while (j < 58)
{
k = j + 1;
while (k < 58)
{
putchar(i);
putchar(j);
putchar(k);
if (i != 55 && j != 57 && k != 58)
{
putchar(44);
putchar(32);
}
k++;
}
j++;
}
i++;
}
putchar('\n');
return (0);
}

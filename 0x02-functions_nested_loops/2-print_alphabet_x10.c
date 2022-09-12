#include<stdio.h>
/*
*betty technicalities
*/void printalpha(void)
{
int i;
i = 97;
while (i != 122)
{
putchar(i);
i++;
}
putchar('\n');
}
/*
*betty technicalities
*/void print_alphabet_x10(void)
{
int k;
k = 0;
while (k != 10)
{
printalpha();
k++;
}
}
/*
*betty technicalities
*/int main(void)
{
print_alphabet_x10();
return (0);
}

#include<main.h>
/*
*betty technicalities
*/void print_alphabet(void)
{
int i;
i = 97;
while (i != 122)
{
_putchar(i);
i++;
}
_putchar('\n');
}

/*
*betty technicalities
*/int main(void)
{
print_alphabet();
return (0);
}

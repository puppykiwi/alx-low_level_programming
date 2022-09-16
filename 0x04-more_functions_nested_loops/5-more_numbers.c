#include "main.h"
#include<stdio.h>
/*
*betty technicalities
*/void more_numbers(void)
{
char num[]="01234567891011121314";
int i,j;
for (j = '0'; j !='11'; j++)
{
for (i = '0'; i != '20'; i++)
{
putchar(i);
}
}
}

int main(void)
{
more_numbers();
}
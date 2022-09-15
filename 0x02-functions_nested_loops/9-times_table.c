#include "main.h"
#include<stdio.h>
/*
*betty technicalities
*/void times_table(void)
{
int a, b;
int d, e, w;
for (a = 0; a < 10; a++)
{
    putchar('0');
    putchar(',');
    putchar(' ');
    putchar(' ');
        for (b = 1; b < 10; b++)
        {
        d = a * b;
        e = b + 1;
        w = a * e;
            if (d < 10)
            {
            putchar(d + '0');
                if (b != 9)
                {
                    if (w < 10)
                    {
                    putchar(',');
                    putchar(' ');
                    putchar(' ');
                    }
                    else
                    {
                    putchar(',');
                    putchar(' ');
                    }
                }
                else 
                {
                    
                }
            }
            else
            {
            putchar((d / 10) + '0');
            putchar((d % 10) + '0');
                if (b != 9)
                {
                putchar(',');
                putchar(' ');
                }
                else
                {

                }
                }
                }
                putchar('\n');
                }
                }

int main(void)
{
    times_table();
    return (0);
}
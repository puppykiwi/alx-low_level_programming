#include "main.h"
/*
*betty technicalities
*/void swap_int(int *a, int *b)
{
int c, d;
c = *a;
d = *b;
*a = d;
*b = c;
}

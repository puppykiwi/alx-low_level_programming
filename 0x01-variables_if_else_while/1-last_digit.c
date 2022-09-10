#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/*
*betty style doc for function main goes there
*/int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

int j;
j = n % 10;
if (j > 5)
{
printf("Last digit of %d is and is greater than 5\n", n); }
else if (j == 0)
{
printf("Last digit of %d is and is 0\n", n); }
else if (j < 6 && j != 0)
{
printf("Last digit of %d is and is less than 6 and not 0\n", n); }
return (0);
}

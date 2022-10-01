#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
*betty technicalities
*/int main(int argc, char *argv[])
{
int result = 0;
int j = 1;

if (argc == 1)
{
printf("0\n");
}

else
{
while (j != argc)
{
if (isdigit(atoi(argv[j])))
{
result = result + atoi(argv[j]);
j++;
}
else
{
printf("Error\n");
return (1);
j++;
}
}
printf("%d\n", result);
}
}

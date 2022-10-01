#include <stdio.h>
/*
*betty technicalities
*/int main(int argc, char *argv[])
{
int count = 0;
while (count != argc)
{
printf("%s\n", argv[count]);
++count;
}
return (0);
}

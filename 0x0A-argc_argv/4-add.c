#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int is_number(char *s);
/*
*betty technicalities
*/int main(int argc, char *argv[])
{
int result = 0;
int j = 1;
int check;
if (argc == 1)
{
printf("0\n");
}

else
{
while (j != argc)
{
check = is_number(argv[j]);
if (check == 1)
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

/*
*betty technicalities
*/int is_number(char *s)
{
int i;
i = 0;
while (*(s + i) != '\0')
{
if (*(s + i) >= '0' && *(s + i) <= '9')
{
i++;
}
else
{
return (0);
}
}
return (1);
}

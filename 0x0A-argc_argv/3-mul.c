#include <stdio.h>
#include <stdlib.h>
/*
*betty technicalities
*/int main(int argc, char *argv[])
{
int result = 1;
int j = 1;

if (argc > 1)
{
    while (j != argc)
    {
        result = result *atoi(argv[j]);
        j++;
    }
    printf("%d\n", result);
    return (0);
}
else
{
    printf("Error\n");
    return (1);
}

}

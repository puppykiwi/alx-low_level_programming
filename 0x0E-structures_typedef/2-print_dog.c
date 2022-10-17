#include "dog.h"
#include <stdlib.h>

/*
*betty technicalities
*/void print_dog(struct dog *d)
{
    if (d == NULL)
    {}
    else
    {
        if ((*d).name == NULL)
        {
            printf("Name: (nil)\n");
        }
        else if ((*d).name != NULL)
        {
            printf("Name: %s\n", (*d).name);
        }

printf("Age: %s\n", (*d).age);

        if ((*d).owner == NULL)
        {
            printf("Owner: (nil)\n");
        }
        else if ((*d).owner != NULL)
        {
            printf("Owner: %s\n", (*d).owner);
        }

    }
}

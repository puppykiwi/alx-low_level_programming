#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/*
*betty technicalities
*/void print_dog(struct dog *d)
{
    if (d != NULL)
    {
        //name checker
        if ((*d).name == NULL)
        {
            printf("Name: (nil)\n");
        }
        else if ((*d).name != NULL)
        {
            printf("Name: %s\n", (*d).name);
        }

        //owner checker
        if ((*d).owner == NULL)
        {
            printf("Owner: (nil)\n");
        }
        else if ((*d).owner != NULL)
        {
            printf("Owner: %s\n", (*d).owner);
        }


        printf("Age: %i\n", (*d).age);

    }
}

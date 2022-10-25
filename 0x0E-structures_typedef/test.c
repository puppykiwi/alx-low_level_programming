#include <stdio.h>
#include <stdlib.h>

char* test;
struct name
    {
        char* first;
        char* second;
    };


int main (void)
{


//dATATYPE NAME-OF-STRUCT INSTANCE-NAME 
struct name test;
//Assigning values to struct members
    test.first = "John"; 
    test.second = "ray";

struct name new;
new = test;

printf("%s\n", new.first);

struct name *point;
point = &test;

printf("%s\n", (*point).first);
printf("%s\n", point->first);
}
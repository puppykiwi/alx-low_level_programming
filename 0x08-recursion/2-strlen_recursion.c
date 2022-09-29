#include "main.h"
#include <stdio.h>
/*
 *betty technicalities
 */int _strlen_recursion(char *s)
{
if (*s != '\0')
return (_strlen_recursion(s + 1) + 1);
}
//what is keeping track of the number of calls
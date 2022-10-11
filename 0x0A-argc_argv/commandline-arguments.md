## Entry points
An entry point is the place in a program where the execution of a program begins, and where the program has access to command line arguments.
 - int main(void);
- int main(int argc, char* argv[ ] );
- int main(int argc, char ** argv );

char *argv[] and char **argv basically mean the same thing.The first means it’s a pointer to an array of strings (an array of characters) while the second means argv is a pointer to a pointer to char(s). 

**int argc**
-argc (*ARGument Count*) is a variable of type int that stores the  number of command-line arguments passed by the user to the  command line. The name of the program is usually passed as the first argument.

-The value of argc is non negative.

**argv(ARGument Vector)**
-The argument argv itself is a pointer. It points to an array of 1 or more pointers. Each one of these pointers points to an array of 1 or more chars ( basically a string) . Each array of chars is a null-terminated string, as is usual in C.

*****Properties of Command Line Arguments:*****

 - They are passed to main() function.
- They are parameters/arguments supplied to the program when it is invoked.
- They are used to control program from outside in stead of hard coding those values inside the code.
-  argv[argc] is a NULL pointer.
- argv[0] holds the name of the program.
-  argv[1] points to the first command line argument and argv[argc -1] points last argument.
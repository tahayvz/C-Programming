#include <stdio.h>
int deneme(int argc, char *argv[]){
    int numberOfArguments=argc;
    char *argument1= argv[0];
    char *argument2= argv[1];
    printf("number of arguments: %d", numberOfArguments);
    printf("argumetn 1 is the  program name: %s",argument1);
    printf("argumetn 2 is the  command line argument: %s",argument2);
return 0;
    }


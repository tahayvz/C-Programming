#include <stdlib.h>//
#include <stdio.h>
   void randomNumber(){
   time_t t;
   srand((unsigned) time(&t));//initilization of random number generator
   int randomNumber=rand()%17;
   printf("17den kucuk randomNumber is %d\n", randomNumber);
}


#include <stdbool.h>//boolean header
#include <stdlib.h>//random sayıda kullandım. conversion, memory, process control, sort and search, mathematics'lerde kullanılır
#include <stdio.h> // birden fazla standart sistem dizinlere bakacak
/*#include "stdio.h" ilk önce simdiki dizine bakacak ve include dosyası içinde olmak zorunda degil
#ifndef ve #define headerin birden fazla içerigine karsi korunmak için*/
#define PAYRATE 12.00 //constant used for character and string
#include <string.h>
#include <stddef.h>
#include "includes.h"
#define SECONDS_IN_YEAR (60UL * 60UL * 24UL * 365UL)
 #define cat(x,y) x##y
 #define xcat(x,y) cat(x,y)
//int myGlobal=0; //global value

int main(int argc, char *argv[]){

//         enums();
//         multiply(3);
   //    VariableSize();
//         whileLoop(); //while loop and goto
//         Arrays(); //quotes in quotes
//         game(); //tictactoe game
//         randomNumber();
//         strings();
//         ebob();
         pointers();
//         swap(4,5);
//         evenOdd(7);
//         linkedListExamples();
//         circularLinkedList();
//         stackExample();
//         stackWithLinkedList();
/*    int numberOfArguments=argc; //programın project sekmesinde set program argumentted yazıldı
    char *argument1= argv[0];
    char *argument2= argv[1];
    char *argument3= argv[2];
    char *argument4= argv[3];
    char *argument5= argv[4];


    printf("\n number of arguments: %d", numberOfArguments);
    printf("\n argument 1 is the  program name: %s",argument1);
    printf("\n argument 2 is the  command line argument: %s",argument2);
    printf("\n argument 3 is : %s",argument3);
    printf("\n argument 4 is : %s\n",argument4);
    printf("\n argument 5 is : %s\n",argument5);

    double width= atoi(argv[1]);
    double height =atof(argv[2]);
    double area =atol(argv[3]);
    printf("width %f height %f long %f", width,height,area);
*/

//        int localValueMain=0; //local value
//        printf("PAYRATE %f\n", PAYRATE);

//if condition
/*        int yy=1;
        int xx = (yy<7?25:50);
        printf("\nxx %d\n",xx);
*/

    int x3=SECONDS_IN_YEAR;
    printf("1 yilda kac saniye var: %d",x3);
    int x=cat(1,3);
    printf("%d\n",x);
    int x2=xcat(xcat(1,2),3);
    printf("%d\n",x2);

    /* //sonsuz looplar
    while(1)
        { }

        for(;;)
        { }

        Loop:
        goto Loop
    */

    /* her degisken turunu alabilen fonksiyon
    typedef struct
        {
        node *next;
        void *data;
        }node;

    */

    /*
    int i = 2, j = 3, res;
    res = i+++j; //(i++) + j döner 5 tir sonra i 3 olur
     */
      return 0;
}


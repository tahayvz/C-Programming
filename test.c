#include <stdbool.h>//boolean header
#include <stdlib.h>//random sayıda kullandım. conversion, memory, process control, sort and search, mathematics'lerde kullanılır
#include <stdio.h> // birden fazla standart sistem dizinlere bakacak
/*#include "stdio.h" ilk önce simdiki dizine bakacak ve include dosyası içinde olmak zorunda degil
#ifndef ve #define headerin birden fazla içerigine karsi korunmak için*/
#define PAYRATE 12.00 //constant used for character and string
#include <string.h>
#include <stddef.h>

#include "enums.h" //h ve c hosyalarını yazdıktan sonra project sekmesinde add files ile eklemeliyiz
#include "multiply.h"
#include "TicTacToe.h"
#include "whileLoop.h"
#include "Arrays.h"
#include "randomNumber.h"
#include "VariableSize.h"
#include "strings.h"
#include "ebob.h"
#include "pointers.h"


//int myGlobal=0; //global value

int main(int argc, char *argv[]){

//        int localValueMain=0; //local value
//        printf("PAYRATE %f\n", PAYRATE);

//if condition
/*        int yy=1;
        int xx = (yy<7?25:50);
        printf("\nxx %d\n",xx);
*/
//         enums();
//         multiply(3);
//         VariableSize();
//         whileLoop(); //while loop and goto
//         Arrays(); //quotes in quotes
//         game(); //tictactoe game
//         randomNumber();
//         strings();
//         ebob();
        pointers();

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

      return 0;
}


#include <stdio.h>
void enums(){

enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};
    enum week today;
    today = Wed;
    printf("%d\n",today);
    switch(today){
    case Mon:
    printf("today monday\n");
    break;
    case Wed:
    printf("today wednesday\n");
    break;
    default:
    printf("whatever");
    }


enum year{Jan, Feb, Mar, Apr, May, Jun, Jul,Aug, Sep, Oct, Nov, Dec};
   int i;
   for (i=Jan; i<=Dec; i++)
      printf("%d ", i);

enum State {Working = 1, Failed = 0, Freezed = 0};
      printf("\n%d, %d, %d", Working, Failed, Freezed);
enum day {sunday,monday,tuesday,wednesday,thursday,friday,saturday};
enum day d = thursday;
    printf("\nThe day number stored in d is %d", d);
    for (enum day days=sunday; days<=saturday; days++){
            printf("\ndays for loop\n");
    }
}

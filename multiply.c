#include <stdio.h>
void multiply(int x){
int y;
 //x is local value. Local value not access main method
 printf("enter y value\n");
scanf("%d", &y);
int result=x*y;
printf("result is is %d\n",result);

    double dd= 33.45;
    printf("double dd is %f",dd);
    int a=(int)dd;
    printf("\n dd casting int: %d\n",a);
}

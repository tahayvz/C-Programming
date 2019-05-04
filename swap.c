#include <stdio.h>
void swap(int a, int b){
    printf("\nbefore swap a: %d, b: %d",a,b);
    a=a^b;
    b=b^a;
    a=a^b;
    printf("\nafter swap a: %d, b: %d",a,b);
}

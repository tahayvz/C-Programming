#include <stdio.h>
#include <stdbool.h>
void VariableSize(){
  int integerVar=200;
    float floatingVar=33.55;
    double doubleVar=44.55e+11;
    char charValue='d';
    bool boolVar=0;
    bool boolVar2=true;
    char  *pointerSize=charValue;
    printf("\nintegerVar=%i\n", integerVar);
    printf("floatingVar= %f\n", floatingVar);
    printf("doubleVar=%e\n", doubleVar);
    printf("doubleVar:%g\n", doubleVar);
    printf("doubleVar:%d\n", doubleVar);
    printf("doubleVar:%f\n", doubleVar);
    printf("boolVar=%i\n", boolVar);
    printf("boolVar2=%i\n", boolVar2);

    printf("\nchar size byte %u", sizeof(char));
    printf("\nshort size byte %u", sizeof(short));
    printf("\nint size byte %u", sizeof(int));
    printf("\nlong size byte %u", sizeof(long));
    printf("\nlong long size byte %u", sizeof(long long));
    printf("\nfloat size byte %u", sizeof(float));
    printf("\ndouble size byte %u", sizeof(double));
    printf("\nlong double size byte %u", sizeof(long double));
    printf("\npointer size: %d\n", sizeof(pointerSize));

    //bit fields
    struct date{
    unsigned int year;
    unsigned int month:4;//12 month so max 4 bit
    unsigned int day:5; // 31 day so max 5 bit
    };
       printf("Size of date is %d bytes yani 4 byte azaldý\n", sizeof(struct date));
    struct date dt = {2014, 12, 20};
   printf("Date is %d/%d/%d\n", dt.day, dt.month, dt.year);




}

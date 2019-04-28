#include <stdio.h>
#include <stdbool.h>
void VariableSize(){
  int integerVar=200;
    float floatingVar=33.55;
    double doubleVar=44.55e+11;
    char charValue='d';
    bool boolVar=0;
    bool boolVar2=true;
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

}

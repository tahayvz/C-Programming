#include <stdio.h>
void Arrays(){
 int counts[3]={0,2};
        printf("counts %d, %d, %d\n",counts[0],counts[1],counts[2]);
        int countss[2][2] = {[0][0]=1};
        printf("countss %d, %d, %d\n",countss[0][0],countss[1][0],countss[0][1]);

        printf("for\"you write\\\".");

         int grades[2];

    for(int i=0;i<3;i++){
            printf("\nenter grade[%d] integer\n",i);
            scanf("%d", &grades[i]);
            printf("grade[%d] is %d\n", i,grades[i]);
   }
    char str[100];
    int m;
    printf("enter a value:"); //comment
    scanf("%d %s",&m,str);
    printf("\n you entered: %d ve %s\n", m,str);
   }


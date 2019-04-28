
#include <stdbool.h>//boolean header
#include <stdlib.h>//random sayıda kullandım. conversion, memory, process control, sort and search, mathematics'lerde kullanılır
#include <stdio.h> // birden fazla standart sistem dizinlere bakacak
/*#include "stdio.h" ilk önce þimdiki dizine bakacak
#ifndef ve #define headerýn birden fazla içeriðine karþý korunmak için*/
#define PAYRATE 12.00 //constant used for character and string
#include <string.h>
#include <stddef.h>

/*void copyString(char to[], char from[]){
int i;
for(i=0;from[i]!='\0';++i){
    to[i]=from[i];}
    to[i]='\0';}*/
/* void copyString(char *to, char *from){
int i;
for(;*from!='\0';++from,++to){
    *to=*from;}
    *to='\0';} */

 void copyString(char *to, char *from){
int i;
while(*from){//null character equal to 0
        *to++=*from++;}
    *to='\0';}

int strings()
{
            int i=7;
            float f=2.44;
            char c='r';
            void *vptr;//type belli olmayan pointer
            vptr=&i;
            printf("i=%d\n",*(int *)vptr);
            vptr=&f;
            printf("f=%f\n",*(float *)vptr);
            vptr=&c;
            printf("c=%c\n",*(char *)vptr);

             /*  char input[10];
           printf("input string\n");
           scanf("%s",input);
           printf("input is %s\n",input);*/

           char str1[]="to be or not to be";
           char str2[]="that is not question";
           unsigned int count=0;
           while(str1[count]!='\0')
            ++count;
           printf("length of string \"%s\" is %d characters\n", str1,count);
           count=0;
           while(str2[count]!='\0')
            ++count;
            printf("length of string \"%s\" is %d characters\n", str2,count);
      //      const char message[]="taha yavuz";//constant
            printf("string length %d",strlen(str1));
            char str3[]="";
            strcpy(str3,str2);
            printf("\nstr3 is %s",str3);
            //strcpy() strncpy() strcat() strncat() strcmp() strncmp() strlen() strchr() strstr() strtok()
            memset(str3,'$',7); //ilk 7 karakteri $ işareti olur
            printf("\nstr3 is %s\n",str3);
            strncat(str3,str1,5);//str1 ilk 5 harf eklenir
            printf("str3 is %s\n",str3);
            printf("strcmp(\"Zaa\",\"Abb\")is ");
            printf("%d\n",strcmp("Zaa","Abb"));
            printf("strcmp(\"bx\",\"fv\")is ");
            printf("%d\n",strcmp("bx","fv"));
            char chr='t';
            char *pGot_char=NULL;
            pGot_char=strchr(str3,chr);//strchr() ilk bulduğu chr charından sonrasını kopyalar
            printf("%s\n",pGot_char);
            strcpy(str1,"this is -not dog");
            strcpy(str2,"this is -not- bat");
            const char haystack[20] = "TutorialsPoint";
            const char needle[10] = "Point";
            char *ret;
            ret = strstr(haystack, needle);
            printf("The substring is: %s\n", ret);
            char s[2]="-";
            ret=strtok(str1,s);//kesme
            printf("%s\n",ret);
            char text[5]="taha";
            int ii;
            for(ii=0; ii<4;++ii){
            text[ii]=(char)toupper(text[ii]);}
            printf("%s\n",text);
           /* for(int i=0; (text[i]=(char)tolower(text[i]))!='0';++i);
            printf("%s\n",text);*/


             char string1[]="a string to be copied\n";
            char string2[50];
            copyString(string2,string1);
            printf("%s %c\n",string2,string2[2]);


return 0;
}

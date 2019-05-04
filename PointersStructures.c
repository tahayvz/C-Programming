#include <stdio.h>
#include <stdlib.h>//malloc,calloc bu headerda
#include <string.h>

int arraySum(int array[], const int n){
    int sum=0,*ptr;
    int *const arrayEnd=array+n;
    for(ptr=array;ptr<arrayEnd;++ptr)
        sum+=*ptr;
    return sum;
}
int arraySum2(int *pSum, const int n){
    int sum=0;
    int *const arrayEnd=pSum+n;
    for(;pSum<arrayEnd;++pSum)
        sum+=*pSum;
        return sum;
}
void Swap(int *x, int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return;
}
void Square(int * x){
            *x = (*x)*(*x);
            return;
            }
int stringLength(const char *string){
    const char *lastAddress=string;
    while (*lastAddress)
    ++lastAddress;
    return lastAddress-string;
}

            struct namect{
            char *fname;
            char *iname;
            };
void getinfo(struct namect *pst){
            char temp[10];
            printf("please enter your first name\n");
            scanf(" ");//gets_s() metodu kullanmadım
            gets(temp);
            //allocate memory to hold name
            pst->fname=(char *)malloc(strlen(temp)+1);
            //copy name to allocated memory
            strcpy(pst->fname,temp);
            printf("please enter your last name\n");
            scanf(" ");
            gets(temp);
            pst->iname=(char *)malloc(strlen(temp)+1);
            strcpy(pst->iname,temp);
}
void printInfo(struct namect *pprint){
    printf("\nName: %s surname: %s",pprint->iname,pprint->fname);

}



struct item{
            char *itemName;
            int qty;
            float price;
            float amount;
            };


void readItem(struct item *i){
        printf("enter product name: ");
        scanf("%s",i->itemName);

        printf("\nenter price: ");
        scanf("%f",&i->price);

        printf("\nenter quantity: ");
        scanf("%d",&i->qty);

        i->amount=(float)i->qty * i->price;

    }
void printItem(struct item *i){
    printf("\nName: %s",i->itemName);
    printf("\nprice: %.2f",i->price);
    printf("\nquantity: %d",i->qty);
    printf("\ntotal amount: %.2f\n",i->amount);

}

struct funds{
char bank[20];
double bankfund;
char save[20];
double savefund;
};
double sum(struct funds moolah){
return(moolah.bankfund + moolah.savefund);}

int pointers()
{
           int count=10,x;
           int *intpointer;
           intpointer=&count;
           x=*intpointer;
           printf("count=%i \nx=%i \n&intpointer: %p \n(void*)intpointer: %p pointerin adresini gösterir. \n(int)sizeof(intpointer): %d\nintpointer: %p \n*intpointer: %d",
                  count,x,&intpointer,(void*)intpointer, (int)sizeof(intpointer),intpointer,*intpointer);
           printf("\n&count: %p \ncount: %d\n",&count,count);
            //pointera değer atamak için *p, adres atamak için p yazılır.
            long num1=1L;
            long num2=2L;
            long *pnum=NULL;
            pnum=&num1;
            *pnum=2L;//num1 degeri degisir
            ++num2;
            num2+=*pnum;
            pnum=&num2;
            ++*pnum;
            printf("num1=%ld num2=%ld *pnum=%ld *pnum+num2=%ld\n",num1,num2,*pnum,*pnum+num2);
            ++pnum;
            printf("num1=%ld num2=%ld *pnum=%ld *pnum+num2=%ld\n",num1,num2,*pnum,*pnum+num2);
            --pnum;
            printf("num1=%ld num2=%ld *pnum=%ld *pnum+num2=%ld\n",num1,num2,*pnum,*pnum+num2);
            printf("input integer\n");
            scanf("%ld",pnum);//input pointer
            printf("entered %ld, %p\n",num2,*pnum);


            long num5=5L;
            const long *plong=&num5; //pointer degeri constant olur
            printf("*plong %ld\n",*plong);
            num5=4L;
            printf("*plong %ld\n",*plong);
            plong=&num2;
            printf("*plong %ld\n",*plong);
            long *const constantPointLong=&num2;//constant pointer: adresi değişmez aynı değişkende kalır değerleri degistirilebilir
            // constantPointLong=&num5; //pointer constant oldugundan degistirilemez
            printf("constantPointLong: %ld\n", constantPointLong);
            printf("*plong: %ld\n",*plong);
            *constantPointLong=3L;
            printf("constantPointLong: %ld\n", constantPointLong);//pointer degeri degismedi
            printf("constantPointLong: %p\n", *constantPointLong);
            printf("*plong: %ld\n",*plong);
            printf("num2: %ld\n",num2);
            num2=99L;
            printf("constantPointLong: %ld\n", constantPointLong);
            printf("*constantPointLong: %d\n", *constantPointLong);

            printf("*plong: %ld\n",*plong);
            const long *const pitem=&num2;
           // pitem=&num5;//izin verilmedi cünkü num2 adresi constant olmustu
            printf("*pitem: %ld\n" , *pitem);

            char *pGot_char=NULL;
            char str3[]="";
            char str1[]="to be or not to be";
            char str2[]="that is not question";
            char chr='a';
            pGot_char=str2;
            printf("%s\n",pGot_char);
            pGot_char=strchr(str2,chr);//strchr() ilk bulduðu chr charindan sonrasini kopyalar öncesini kopyalamaz
            printf("%s\n",pGot_char); //calismadi???

            char *ret;
            const char haystack[20] = "TutorialsPoint";
            const char needle[10] = "Point";
            ret = strstr(haystack, needle);
            printf("The substring is: %s\n", ret);
            char s[2]="-";
            ret=strtok(str1,s);//kesme
            printf("%s\n",ret);

            char multiple[]="a string";
            char *p=multiple;
            for(int i=0;i<strlen(multiple);++i){
                printf("multiple[%d]=%c *(p+%d)=%c &multiple[%d]=%p p+%d=%p\n",
                       i,multiple[i],i,*(p+i),i,&multiple[i],i,p+i);
            }
            *(p)=multiple;
            *(p+2)='x';//multiple[2] nin s degeri x oldu
            printf("%c\n",*(p+2));
            int value[2];
            *(p)=value;
            *(p)=34;  *(p+1)=77;
            printf("%d %d \n",*(p),*(p+1));//pointer ile arraye erisim
            printf("%d, %d\n", ++*(p),--*(p+1));//pointer ile deðeri bututme kucultme
           // int arraySum(int array[], const int n);
            int values[10]={3,5,4,-4,-6,3,7,4,6,7};
            printf("the sum is %i\n",arraySum(values,10));
         //   int arraySum2(int *pSum, const int n);
            printf("the sum2 is %i\n",arraySum2(values,10));
            int *ptr1=values;
            int *ptr2=ptr1+3;//values[3]
            printf("*ptr2: %i\n",*ptr2);
            ptr2=values+1;//values[1]
            printf("*ptr2: %i\n",*ptr2);
            //values++ olmaz, ptr2=ptr2+ptr1 olmaz, ptr2=ptr1+values olmaz
            int sayi1=4;
            int sayi2=5;
            printf("swapten once sayi1 %d, sayi2 %d\n",sayi1,sayi2);
            Swap(&sayi1,&sayi2);
            printf("sayi1 %d, sayi2 %d\n",sayi1, sayi2);

            int *pnumber=(int *)malloc(100);//allocate memory,100byte memory ayırdı.yani 4 byte'lık 25 int
            // int *pnumber=(int *)malloc(25*sizeof(int)); aynı
            //pointer bir adresi göstermiorsa malloc pointer'ı NULL yapar
            if(pnumber!=NULL)//if(!pnumber)
                 printf("pointer is not null\n");
            free(pnumber);//formal void parametredir
            pnumber=NULL;
            if(pnumber==NULL)
                 printf("pointer is null\n");

            int *pnumber2=(int *)calloc(75,sizeof(int));//malloc'dan fazlası calloc initialize the allocated memory
            //realloc önceden kullanılmıs malloc ve calloc'ların boyutunu buyutmek ve yeniden kullanabilmek icin kullanilir
            char *str=(char *)malloc(15);
            strcpy(str,"jason");
            printf("string %s adress %u\n",str,str);
            str=(char *)realloc(str,25);
            strcat(str,".com");
            printf("string %s adress %u\n",str,str);
            str=(int *)realloc(str,5);//chardan inte casting yaptım
            int aaa=3;
            str=&aaa;
            printf("int %d adress %u\n",*str,str);
            free(str);

            int *pnumber3=NULL;
            pnumber3=&aaa;
            printf("aaa adress is %p\n",&aaa);
            printf("pnumber3 adress is %p\n",&pnumber3);
            printf("value of the pnumber3 %p\n", pnumber3);//aaa nın adresini gosterdi
            printf("value of the what pnumber3 is point %d\n", *pnumber3);

            /*const int *ptr or int const *ptr:
            ptr is not constant but the value pointed by it is constant. ++ptr is allowed but ++*ptr is not allowed. Pointed value constant but pointed address not constant
            int * const ptr:
            ptr is constant but the value pointed by it is not constant. ++ptr is not allowed but ++*ptr is allowed. Pointed value not constant but pointed address constant
                        */
            int *num3=(int *)malloc(sizeof(int));
            *num3=6;
            Square(num3);
            printf("the square of given number %d\n",*num3);

            printf("%d \n",stringLength("string"));
            printf("%d \n",stringLength(""));
            printf("%d \n",stringLength("taha"));

            //gets metodu
            int size;
            char *text=NULL;
            printf("enter limit of the text \n");
            scanf(" %d",&size);
            text = (char *)malloc(size*sizeof(char));
            if(text!=NULL){
                printf("enter some text \n");
                scanf(" ");
                gets(text);//scanf icin girilen degeri okur
                printf("inputted text is %s\n",text);
            }
            free(text);
            text=NULL;

            struct date
            {
                int day;
                int month;
                int year;

            };
            struct date today;

            today.day=28;
            today.year=2019;
            today.month=3;
            printf("today date is %i/%i/%i\n",today.day,today.month,today.year);

            today=(struct date){19,2,1993};
            printf("today date is %i/%i/%i\n",today.day,today.month,today.year);

            today=(struct date){.month=2,.day=24,.year=1999};
            printf("today date is %i/%i/%i\n",today.day,today.month,today.year);

            struct date tomorrow={29,3,2019};
            printf("tomorrow date is %i/%i/%i\n",tomorrow.day,tomorrow.month,tomorrow.year);

            struct time
            {
                int hour;
                int minute;
                int second;
            }now;
            now=(struct time){13,13,44};
            printf("now  time is %i.%i.%i\n",now.hour,now.minute,now.second);
            printf("sizeof struct time now: %d\n",sizeof(now));


            struct time time1={13,1}; //second belli degil
            printf("now time1 is %i.%i.%i\n",time1.hour,time1.minute,time1.second);

            struct time time2={.second=20};
            printf("now time2 is %i.%i.%i\n",time2.hour,time2.minute,time2.second);

            struct time thisTime[3];
            thisTime[1].hour=12;
            thisTime[1].minute=32;
            thisTime[1].second=54;
            thisTime[2].hour=11;
            thisTime[2].minute=39;
            thisTime[2].second=24;
            printf("now thisTime[1] is %i.%i.%i\nnow thisTime[2] is %i.%i.%i\n ",thisTime[1].hour,thisTime[1].minute,thisTime[1].second,
                   thisTime[2].hour,thisTime[2].minute,thisTime[2].second);

            struct time myTime[2]={{4,11,4},{8,49,21}};
            printf("time myTime[2] is %i.%i.%i\n",myTime[0].hour,myTime[0].minute,myTime[0].second);
            struct time thatTime[2]={2,11,4,11,22,33};
            printf("time thatTime[2] 1. is %i.%i.%i\ntime thatTime[2] 2. is %i.%i.%i\n",thatTime[0].hour,thatTime[0].minute,thatTime[0].second,
                   thatTime[1].hour,thatTime[1].minute,thatTime[1].second);
            struct time yourTime[1]={[0]=4,19,51};
            printf("time yourTime[1] is %i.%i.%i\n",yourTime[0].hour,yourTime[0].minute,yourTime[0].second);

            struct month{
            int numberOfDays;
            char name[3];
            };
            struct month thisMonth;
            thisMonth.numberOfDays=31;
            thisMonth.name[0]='J';
            thisMonth.name[1]='A';
            thisMonth.name[2]='N';
            printf("thismonth numberofdays %i this month name %c%%c%c\n",thisMonth.numberOfDays,thisMonth.name[0],thisMonth.name[1],thisMonth.name[2]);

            struct month anotherMonth={31,{'M','A','R'}};
            printf("anotherMonth numberofdays %i anotherMonth name %c%%c%c\n\n",thisMonth.numberOfDays,thisMonth.name[0],thisMonth.name[1],thisMonth.name[2]);

            struct month months[3];
            months[1].name[0]='F';
            months[1].name[1]='E';
            months[1].name[2]='B';
            months[2].name[0]='M';
            months[2].name[1]='A';
            months[2].name[2]='R';
            printf("months[1] is %c%c%c months[2] is %c%c%c\n\n",months[1].name[0],months[1].name[1],months[1].name[2],
                   months[2].name[0],months[2].name[1],months[2].name[2]);

            struct dateAndTime{
            struct date sdate;
            struct time stime;
            };
            struct dateAndTime event={2,1,2015,3,4,5};
            printf("sdate is %i/%i/%i and stime is %i.%i.%i\n",event.sdate.day,event.sdate.month,event.sdate.year,
                   event.stime.hour,event.stime.minute,event.stime.second);

            struct dateAndTime event2={{.month=2,.day=1,.year=2015},
                    {.hour=3,.minute=4,.second=5}
                                        };
             printf("sdate is %i/%i/%i and stime is %i.%i.%i different declaration\n\n",event.sdate.day,event.sdate.month,event.sdate.year,
                   event.stime.hour,event.stime.minute,event.stime.second);

            struct dateAndTime event3[2];
            event3[0].stime.hour=12;
            event3[0].stime.minute=1;
            event3[0].stime.second=33;
            event3[0].sdate.day=12;
            event3[0].sdate.month=1;
            event3[0].sdate.year=1992;
          printf("event3[0].stime is %i,%i,%i and event3[0].sdate is %i/%i/%i \n\n", event3[0].stime.hour,event3[0].stime.minute,event3[0].stime.second,
                 event3[0].sdate.day,event3[0].sdate.month,event3[0].sdate.year);

            struct date2{
            struct time2{
            int minute;
            int hour;
            };
            int year;
            };
            struct date2 date22;
            date22.year=2000;
            struct time2 time22;
            time22.minute=43;
            time22.hour=5;
            printf("year is %i and time is %i.%i\n\n",date22.year,time22.hour,time22.minute);

            struct date *datePtr;
            datePtr=&today;
            datePtr->month=9;//(*datePtr).month=9;
            datePtr->day=25;
            datePtr->year=2015;
            printf("today date is %i.%i.%i\n\n",(*datePtr).day,datePtr->month,datePtr->year=2015);

            struct intPtr{
            int *p1;
            int *p2;
            };
            struct intPtr pointers;
            int i1=100,i2;
            pointers.p1=&i1;
            pointers.p2=&i2;
            *pointers.p2=-97;
            printf("i1=%i,*pointers.p1=%i\n",i1,*pointers.p1);
            printf("i2=%i,*pointers.p2=%i\n",i2,*pointers.p2);

            struct names{//40bytelık yer ayirmis
            char first[20];
            char last[20];
            };
            struct pnames{//en fazla 16 byte tutar
            char *first;
            char *last;
            };
            struct names veep={"taha","yavuz"};
            struct pnames treas={"bunyamin","yavuz"};
            printf("%s and %s\n", veep.first, treas.first);
            printf("%s and %s\n", veep.last, treas.last);


            struct family{
            char name[20];
            int age;
            char father[20];
            char mother[20];
            };
            struct employee {
            char name[30];
            char date[15];
            float salary;
            };
            struct employee emp={
                "mike","7/11/15",76909.00f
            };
            printf("\n Name:  %s"    ,emp.name);
            printf("\n hire date:  %s"    ,emp.date);
            printf("\n salary:  %.2f\n" ,emp.salary);
            printf("enter employee information\n");
            printf("\n Name:  ");
            scanf("%s",emp.name);
            printf("\n hire date: ");
            scanf("%f",&emp.date);
            printf("\nsalary: ");
            scanf("%f",&emp.salary);
            printf("\n Name:  %s"    ,emp.name);
            printf("\n hire date:  %s"    ,emp.date);
            printf("\n salary:  %.2f\n" ,emp.salary);


            struct item itm;
            struct item *pItem;
            pItem=&itm;
            pItem->itemName=(char *)malloc(30 * sizeof(char));
            if(pItem==NULL)
                exit(-1);
            readItem(pItem);
            printItem(pItem);
            free(pItem->itemName);


            struct funds stan={"Turkiye finans",11.22,"Taha's savings and loan\n",11.33};
            printf("Taha has a total of $%.2f\n",sum(stan));

            int letters;
            getinfo(&letters);
            printInfo(&letters);

            typedef enum{
                male,
                female
            } gender;
            typedef struct{
                int age;
                char *name;
                gender sex;
            }human;
            human jack;
            jack.age = 25;
            jack.sex = male;
            printf("Age of Jack : %d \nGender of Jack : %u\n", jack.age,jack.sex);
            human *john;
            john = (human*)malloc(sizeof(human));
            john -> age = 30;
            john -> sex = male;
            printf("Age of John : %d \nGender of John : %u\n", john->age,john->sex);

                    return 0;
}




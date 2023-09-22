#include<stdio.h>
struct Date 
{
    int day;
    int month;
    int year;
};
 void initDate(struct Date* ptrDate){
    ptrDate->day=1;
    ptrDate->month=1;
    ptrDate->year=1991;
    printf("accomplish target \n");
    
 }
 void printDateOnConsole(struct Date* ptrDate){
    printf("%d/%d/%d \n",ptrDate->day=2,ptrDate->month=6,ptrDate->year=2001);
 }

void acceptDateFromConsole(struct Date* ptrDate){
    printf("enter the day:");
    scanf("%d",&ptrDate->day);
    printf("enter the month:");
    scanf("%d",&ptrDate->month);
    printf("enter the year:");
    scanf("%d",&ptrDate->year);



}


int main(){
    int a;
    struct Date date;
   do{

    printf("press 1 for init \n");
    printf("press 2 for print \n");
    printf("press 3 for accept \n");
    printf("press 0 to exit  \n");
    printf("enter your choice ");
    scanf("%d",&a);
    switch(a){
    
    case 1 :initDate(&date);
    break;

    case 2 :printDateOnConsole(&date);
    break;
    
    case 3:acceptDateFromConsole(&date);
    break;
    
    }

}while(a!=0);
return 0;
   }

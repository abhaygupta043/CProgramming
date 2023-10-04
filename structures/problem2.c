#include<stdio.h>
int main(){
    /*create a structure "date" that cotains three members namely date,
    month, year. take two structure variaables from user with different dates
     and now compare the two.If the dates are equal then display message as
     "equal" otherwise "unequal" .... */
    typedef struct data{
        int day;
        int month;
        int year;
    } data;
    data date1,date2;
    printf("enter day,month,year for 1st date:");
    scanf("%d %d %d",&date1.day,&date1.month,&date1.year);
    printf("enter day,month,year for 2nd date:");
    scanf("%d %d %d",&date2.day,&date2.month,&date2.year);
    if(date1.day==date2.day&&date1.month==date2.month&&date1.year==date2.year) printf("equal");
    else printf("not equal");
    return 0;
}
#include<stdio.h>
int main(){
    /*take day, month, year as input and print next date and 
    add some constrain to the input...*/
    int year,month,day,mxd,error=0,leap=0;
    printf("enter value of year: ");
    scanf("%d",&year);
    printf("enter value of month: ");
    scanf("%d",&month);
    printf("enter value of day: ");
    scanf("%d",&day); 
    if(month<=12){
        if(month==(1||3||5||7||8||10||12)) mxd=31;
        else if(month==(4||6||9||11)) mxd=30;
        else{
            if((year%4==0 && year%100!=0) || (year%400==0)) mxd=29;
            else mxd=28;
        }
        if(day>mxd) printf("enter correct day");
        else if(day==mxd){
            if(month<12){
                day=1;
                month++;
            }
            else{
                day=1;
                month=1;
                year++;
            }
        }
        else day++;
        printf("%d/%d/%d",day,month,year);
    }
    else printf("given month or day is inappropriate plzz enter correct month or day");
    return 0;
}
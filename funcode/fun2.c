#include<stdio.h>
int main(){
    /*printing yesterday date according to today's date...*/
    int day,month,year;
    printf("enter day:");
    scanf("%d",&day);
    printf("enter month:");
    scanf("%d",&month);
    printf("enter year:");
    scanf("%d",&year);
    if(day>1) day-=1;
    else if(month==1){
        day=31;
        month=12;
        year-=1;
    }
    else if(month-1==(3||5||7||8||10||12)){
        day=31;
        month-=1;
    }
    else if(month-1==(4||6||9||11)){
        day=30;
        month-=1;
    }
    else{
        if(year%4==0 && year%100!=0 || year%400==0){
            day=29;
            month-=1;
        }
        else{
            day=28;
            month-=1;
        }
    }
    printf("yesterday date : %d:%d:%d",day,month,year);
    return 0;
}
#include<stdio.h>
int main(){
    /*a record contains name of cricketer, his age,
    no. of test matches he has played and the average run
    that he has scored in each test match. Create an array
    of structure to hold records of such cricketer and 
    then write a program to take input of data from user 
    and then read these records...*/
    int n;
    printf("enter the no. of records you want to enter:");
    scanf("%d",&n);
    typedef struct crickrecord{
        int age;
        char name[20];
        int matches;
        float avg;
    } record;
    record arr[n];
    for(int i=0;i<n;i++){
        printf("enter name of cricketer no. %d :",i+1);
        scanf("%s",&arr[i].name);
        printf("enter age: ");
        scanf("%d",&arr[i].age);
        printf("enter no. of matches he played: ");
        scanf("%d",&arr[i].matches);
        printf("enter average score obtained : ");
        scanf("%f",&arr[i].avg);
    }
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i].name);
        printf("age :%d\n",arr[i].age);
        printf("no. of matches :%d\n",arr[i].matches);
        printf("avg. score obtained :%f\n",arr[i].avg);
    }
    return 0;
}
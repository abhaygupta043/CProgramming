#include<stdio.h>
int main(){
    /*create a structure type 'book' with name,
    price and number of pages as its attributes...*/
    struct book{
        char name[30];
        float price;
        int pages;
    }a,b,c;
    printf("enter name of book:");
    gets(a.name);
    printf("enter price:");
    scanf("%f",&a.price);
    printf("enter no. of pages:");
    scanf("%d",&a.pages);
    return 0;   
}
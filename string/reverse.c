#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    printf("enter string:");
    gets(str);
    int size=0;
    while(str[size]!='\0') size++;
    for(int i=size-1;i>=0;i--) printf("%c",str[i]);
    return 0;
}
#include<stdio.h>
int size(char *s);
int main(){
    char str[100];
    printf("enter a string:");
    gets(str);
    int x=size(str);
    printf("size of given string:%d",x);
    return 0;
}
int size(char *s){
    int length=0;
    while(*s!='\0'){
        s++;
        length++;
    }
    return length;
}
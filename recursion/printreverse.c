#include<stdio.h>
#include<string.h>
void reverse(char *ptr);
int main(){
    char str[400];
    printf("enter the string");
    gets(str);
    reverse(str);
    return 0;
}
void reverse(char *ptr){
    if(*ptr=='\0') return ;
    reverse(ptr++);
    printf("%c",*ptr);
    return ;
}
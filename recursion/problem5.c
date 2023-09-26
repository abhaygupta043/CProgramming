#include<stdio.h>
void replace(char *ptr);
int main(){
    /*replace pi with 3.14 in a string...*/
    char str[400];
    printf("enter the string: ");
    gets(str);
    replace(str);
    return 0;
}
void replace(char *ptr){
    if(*ptr=='\0') return ;
    if(*ptr=='p'&& *(ptr+1)=='i'){
        printf("%f",3.14);
        replace(ptr+2);
    }
    else{
        printf("%c",*ptr);
        replace(ptr+1);
    }
    return ;
}
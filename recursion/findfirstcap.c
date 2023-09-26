#include<stdio.h>
void findcap(char str[]);
int main(){
    /*code to find 1st capital letter in astring...*/
    char str[50];
    gets(str);
    return 0;
}
void findcap(char *p){
    if(*p>=65 && *p<=90){
        printf("1st capital letter is : %c",*p);
        return ;
    }
    findcap(p++);
    return ;
}
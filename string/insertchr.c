#include<stdio.h>
int main(){
    /* inserta new character in
    a string at a given position.....*/
    char str[200],chr;
    printf("enter string:");
    gets(str);
    int n;
    printf("enter the character you want to insert:");
    scanf("%c",&chr);
    printf("enter the index at which you want to insert character:");
    scanf("%d",&n);
    int size=0;
    while(str[size]!='\0')
        size++;
    for(int i=size-1;i>=n;i--) 
        str[i+1]=str[i];
    str[n]=chr;
    str[size+1]='\0';
    puts(str);
    return 0;
}
#include<stdio.h>
void copy(char *target,char *source);
int main(){
    /*code to copy elements of one string to
    another ...*/
    char str1[100],str2[200];
    printf("enter string1 and string2 resp. : ");
    gets(str1);
    gets(str2);
    copy(str2,str1);//string 1 is being copied to string 2....
    printf("%s",str2);
    return 0;
}
void copy(char *target,char *source){
    while(*target!='\0') target++;
    while(*source!='\0'){
        *target=*source;
        source++;
        target++;
    }
    *target='\0';
    return ;
}

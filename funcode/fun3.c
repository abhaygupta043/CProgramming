#include<stdio.h>
void isperfect(int num);
int main(){
    /*create a function to determine a number is a perfect
    number or not...*/
    int num;
    printf("enter no. to find is perfect number or not:");
    scanf("%d",&num);
    if(num>0) isperfect(num);
    else printf("number %d is not a perfect number.",num);
    return 0;
}
void isperfect(int num){
    int x=0;
    for(int i=1;i<=num/2;i++){
        if(num%i==0) x+=i;
    }
    if(x==num) printf("number %d is a perfect number",num);
    else printf("number %d is not a perfect number",num);
    return ;
}
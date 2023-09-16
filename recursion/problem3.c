#include<stdio.h>
void decinc(int n){
    if(n==0) return ;
    printf("%d\n",n);
    decinc(n-1);
    printf("%d\n",n);
    return ;
}
int main(){
    /*code to print decreasing and then in decreasing order..*/
    int n;
    printf("enter no. of terms you want to print in decreasing and increasing order:");
    scanf("%d",&n);
    decinc(n);
    return 0; 
}
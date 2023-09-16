#include<stdio.h>
int main(){
    /*code to print fibonacci series upto 
    n terms....*/
    int n;
    printf("enter no. of terms:");
    scanf("%d",&n);
    int x=1,y=1,z;
    for(int i=1;i<=n;i++){
        if(i==1) printf("%d ",1);
        else if(i==2) printf("%d ",1);
        else{
            z=x+y;
            printf("%d ",z);
            x=y;
            y=z;
        }
    }
    return 0;
}
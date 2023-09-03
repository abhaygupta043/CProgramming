#include<stdio.h>
int main(){
    /*in a given array find "x" is present or not.
    if present then print the index */
    int arr[5]={123,45,112,344,56};
    int x;
    printf("enter the no. you want to find :");
    scanf("%d",&x);
    for(int i=0;i<5;i++){
        if(arr[i]==x){
            printf("index of your required no. :%d",i);
            break;
        }
    }
    return 0;
}
#include<stdio.h>
int main(){
    /*check whether an array is palindrome or not..*/
    int n,x,flag=1;
    printf ("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        printf("enter value of element:");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n/2;i++){
        if(arr[i]==arr[n-i-1]) continue;
        else{
            flag=0;
            break;
        }
    }
    if(flag==1) printf("palindrome");
    else printf("not a palindrom");
    return 0;
}
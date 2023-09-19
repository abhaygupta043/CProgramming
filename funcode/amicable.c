#include<stdio.h>
int main(){
    int n;
    printf("enter no. upto which you want to find cantable no. :");
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<=n;i++){
        int x=0;
        for(int j=1;j<=i/2;j++){
            if(i%j==0) x+=j;
        }
        arr[i-1]=x;
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<=n;j++){
            if(arr[i]==j&&arr[j-1]==i+1&&i!=j-1){
                printf("%d and %d are amicable\n",i+1,j);
                break;
            }
        }
    }
    return 0;
}
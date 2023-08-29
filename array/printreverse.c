# include<stdio.h>
int main(){
    /*fetch 5 elements from user and print in reverse order.xyz..*/
    int y=5;
    int arr[5];
    for(int i=0;i<5;i++){
        printf("enter element:");
        scanf("%d",&arr[i]);
    }
    for(int i=(sizeof(arr))/4-1;i>=0;i--) printf("%d",arr[i]);
    return 0;
}
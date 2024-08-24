#include<stdio.h>
int main(){
    int arr[10];
    int n;
    printf("Enter the number to show maltiplication table ");
    scanf("%d",&n);
    for(int i=0;i<10;i++){
        arr[i]= n * (i+1);
        printf("The value of %d x %d is %d \n",n,i+1,arr[i]);
       
    }
    return 0;
}
    
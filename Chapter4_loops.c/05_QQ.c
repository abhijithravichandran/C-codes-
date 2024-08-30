#include<stdio.h>
int main(){
    int n;
    printf("enter a no. to check natural no.");
    scanf("%d",&n);
    for(int i=n;i;i--){
        printf("the natural numbers: %d\n",i);
    }
    return 0;
}
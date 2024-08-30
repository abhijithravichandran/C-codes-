#include<stdio.h>
int main(){
    int fact=1,num;
    printf("Enter number to check the factorial:");
    scanf("%d",&num);
    for (int i = 1; i <= num ; i++)
    {
        fact=fact*i;
        
     }
    // if(num==0){
    //     printf("The factorial is 1");
    // }
    // else{
    //     printf("The factorail of given is %d",fact);
    // }
    printf("The factorail of given is %d",fact);
    return 0;
    // Still the factorial of 0 is 1 
    // because the loop will not executed when fact=0 
    // so it will come & execute line 17
}
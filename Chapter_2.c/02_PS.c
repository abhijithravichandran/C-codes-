// check whether it is divisible by 97 or not 
#include<stdio.h>
int main(){
    //int a=194;
    int a;
    
    printf("Give the  value to check it is divisble by 97 or not:");
    scanf("%d",&a);
    printf(" %d",a%97); // If the reminder is Zero then it is divisble by 97..
    return 0; // if the reminder is 1 then 97 is not divisible..
}

// To check prime no. or not 
#include<stdio.h>
int main(){
    int num=12,i=2;
   
    while (i<num || num==1)
    {
        if (num%i==0 )
        {
            printf("It is not a prime number");
           break;
        }
        else{
            printf("It is prime number");
            break;
        }
    }
    return 0;
}
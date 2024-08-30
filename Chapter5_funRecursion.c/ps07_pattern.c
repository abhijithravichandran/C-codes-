#include<stdio.h>
int pattern(int);
int main(){
    int n=5;
    pattern(n);
    return 0;
}
int pattern(int n){
   for (int i = 0; i < n; i++)
   {
    for (int j = 0; j < (2*i +1); j++) // here, j becomes odd number as 2*i+1
    {
        printf("*");
    }
    
    printf("\n");
   }
   

} // output is 
//*
//***
//***** etc
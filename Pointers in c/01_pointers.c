#include<stdio.h>
int main(){
    int i=72,j=23;
    printf("The address of i and j is %u and %u\n",&i,&j); //u is format specifer for pointers

    printf("The value at the address %u is %u and j is %u",&i,*(&i),*(&j));
    printf("\n%d",i);
    return 0;
}
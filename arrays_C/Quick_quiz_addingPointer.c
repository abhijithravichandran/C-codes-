// Add,sub,Comparison to a pointer operation will be done here

#include<stdio.h>
// Adding number to a pointer
int main(){
    int i=5;
    int *ptr=&i;
    printf("The value of i is %d\n",i);
    printf("The address of i is %d\n",&i);
    printf("The value of ptr is %u\n",ptr);
    ptr=ptr+2; // We are shifting the address to next by adding 4 in the address ptr+1 
    //and if +2 then it will add 8 to the address 
    printf("The value of ptr after incremented is %u\n",ptr);

    return 0;
}
// //output
// The value of i is 5
// The address of i is 6291092
// The value of ptr is 6291092
// The value of ptr after incremented is 6291100
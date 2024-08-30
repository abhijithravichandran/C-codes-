#include<stdio.h>
// subracting number to a pointer
// This subraction of one pointer to another 
int main(){
    int i=5;
    int *ptr=&i;
    printf("The value of i is %d\n",i);
    printf("The address of i is %d\n",&i);
    printf("The value of ptr is %u\n",ptr);
    ptr=ptr-2;  // it subract 8 from address
    printf("The value of ptr after incremented is %u\n",ptr);
    printf("The value of ptr after incremented is %d\n",ptr-&i); // gives  diff
    // Above line shows how much we incremented like this case -2
    // what it actually do is, it divides both and gives difference
    return 0;
}
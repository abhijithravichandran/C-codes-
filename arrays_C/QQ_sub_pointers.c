#include<stdio.h>
// subracting number to a pointer
int main(){
    int i=5;
    int *ptr=&i;
    printf("The value of i is %d\n",i);
    printf("The address of i is %d\n",&i);
    printf("The value of ptr is %u\n",ptr);
    ptr=ptr-2;  // it subract 8 from address
    printf("The value of ptr after incremented is %u\n",ptr);

    return 0;
}

#include<stdio.h>
int main(){
    int i=3;
    int *ptr1=&i;
    int **ptr2=&ptr1;
    printf("The value of i is %d\n",i);
    // i=20; 
    printf("The value of ptr1 is %u\n",*ptr1);
    
    printf("The value of ptr2 is %u\n",*(*ptr2));
    return 0;

}// All the 3 variables are interconnected and due to the pointers 

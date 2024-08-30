#include<stdio.h>
int main(){
    
    int i = 72;
    int *j = &i;
    printf("The address of i is %u\n", &i); //add
    printf("The address of i is %u\n", j); // add of i
    printf("The value of i is %d\n", *j); // Value of i
    printf("The value of i is %d\n", i); //value of i
    printf("The value of i is %d\n", *(&i)); // Value
    return 0;


}
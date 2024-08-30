#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int *ptr=arr; // or int *ptr= &arr[0];
    printf("The value of ptr is %d\n",*ptr); // prints first element 
    ptr=ptr+2;
    printf("The value of ptr is %d\n",*ptr); // here it prints 3 element
    
}
// Array starts from zero[0], so *ptr=arr will have first element
// And ptr + 2 will be 3rd elment  
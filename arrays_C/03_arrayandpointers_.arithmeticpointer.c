// Pointer arithmetic 
#include<stdio.h>
int main(){
    int marks[3]={1,2,3};
    // &marks[0]=> marks [important] Here marks will be first element in marks array 
    int *ptr=marks; // Here it only gives the address of 1st element
    *ptr=89;
    ptr++; // Pointing to 2nd element address
    *ptr=55;
    *ptr++;
    *ptr=25;
    printf("The mark at 0 is %d\n",marks[0]);
    printf("The mark at 1 is %d\n",marks[1]);
    printf("The mark at 2 is %d\n",marks[2]);
    return 0;
}
// This is important concept 
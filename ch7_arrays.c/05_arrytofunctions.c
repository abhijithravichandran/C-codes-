#include<stdio.h>
int func(int *);
int main(){
    int marks[3]={1,3,45};
    func(marks); // it gets the addess of 1st element of array 
}
int func(int *ptr){
    for(int i=1;i<4;i++){
        //*ptr=56;
        printf("The value of student [%d] is %d\n",i,*(ptr++));
    } // above, ptr++ increase the address by 4 and printf 2nd and 3rd element in the array
    return 0;
}
//Output
// The value of student [1] is 1
// The value of student [2] is 3
// The value of student [3] is 45

//---------------------------------------------------------------

// Ouput if line 9 executed 
// The value of student [1] is 56
// The value of student [2] is 56
// The value of student [3] is 56
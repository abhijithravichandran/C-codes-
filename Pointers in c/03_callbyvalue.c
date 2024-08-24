// Call by value Here it copys the value of x to a in fn
#include<stdio.h>
int sum (int, int);

int main(){
    int x = 5;
    int y = 4; // Here it copys the value of x and y to a and b
    printf("The value of x + y is %d\n", sum(x, y));
    printf("The value of x and y is %d and %d", x, y);
    return 0;
}

int sum(int a, int b){ // Value a=5 and b=4 
    a = 56;  // Value of a changes into 56
    return a + b;
}
// we cannot change the value in one function to another 
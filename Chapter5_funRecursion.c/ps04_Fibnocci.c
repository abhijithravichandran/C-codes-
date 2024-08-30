// To find fibnacci of nth number
// #include<stdio.h>
// int fib(int);
// int main(){
//     int n=5;
//     printf("The fibonacci series of %d is ",n);
//     for (int i = 0; i <= n; i++)
//     {
//         printf("%d\t %d\t",fib(i));
//     }
    
//     return 0;

// }

    
// int fib(int n){
//     if(n==1 || n==2){
//         return 1;
//     }
//     return fib(n-1) + fib(n-2);
// }

#include <stdio.h>

// Function to calculate the nth Fibonacci number
int fib(int n) {
    // Base cases: fib(0) = 0, fib(1) = 1
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    // Recursive case: fib(n) = fib(n-1) + fib(n-2)
    else
        return fib(n - 1) + fib(n - 2);
}

// Function to print the Fibonacci series up to n terms
void printFibSeries(int n) {
    // Print each Fibonacci number from 0 to n-1
    for (int i = 0; i < n; i++) {
        printf("%d ", fib(i));
    }
}

int main() {
    int n = 8; // Change n to the number of terms you want in the Fibonacci series
    printf("The Fibonacci series up to %d terms is: ", n);
    printFibSeries(n);
    printf("\n");
    return 0;
}


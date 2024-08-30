#include<stdio.h>
int sum(int);

int main(){
    int n=5;
    printf("The sum of %d natural no. is %d",n,sum(n));
    return 0;
}

int sum(int n){
    if(n==1 ){
        return 1;
    }
    return sum(n-1) +n;
}
// // How the program works 
// sum(5) is called.
// Since n is not 1, it proceeds to the recursive step.
// It calculates sum(4) + 5.
// Now, it needs to calculate sum(4).
// It calculates sum(3) + 4.
// Next, it calculates sum(3).
// It calculates sum(2) + 3.
// Then, it calculates sum(2).
// It calculates sum(1) + 2.
// At this point, sum(1) returns 1 (base case).
// So, sum(2) returns 1 + 2 = 3.
// Then, sum(3) returns 3 + 3 = 6.
// Then, sum(4) returns 6 + 4 = 10.
// Finally, sum(5) returns 10 + 5 = 15.
// after base condition is true, it starts "climbing back up" by computing 
//the sum of all previous integers, ultimately giving us the final sum.

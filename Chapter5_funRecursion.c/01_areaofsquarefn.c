// #include<stdio.h>
// int areaofsquare(int);

// int main(){
//     int a;
//     printf("Enter the side of square:");
//     scanf("%d",&a);
//     printf("The area of square:%dcm",areaofsquare(a));
//     return 0;

// }
// int areaofsquare(int a){
//     int c=a*a;
//     return c;

// }

// Using library functions 
#include<stdio.h>
#include<math.h>
int main(){
    double a=2;
    printf("The area of square: %lf",pow(a,2));
    return 0;
}
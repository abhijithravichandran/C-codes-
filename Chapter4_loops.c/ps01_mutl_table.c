// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number for mult table:");
//     scanf("%d",&n);
//     for (int i = 1; i < 11; i++)
//     {
//         printf( "%d x %d = %d\n",n,i,i*n);
//     }
//     return 0;
// }

// Multiplication table in reverse order

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number for mult table:");
//     scanf("%d",&n);
//     for (int i = 10; i >0; i--)
//     {
//         printf( "%d x %d = %d\n",n,i,i*n);
//     }
//     return 0;
// }

// Calculate the sum of numbers occuring in the multiplication table of 8
#include<stdio.h>
int main(){
    int sum=0, num=8,t;
    for (int i = 1; i < 11; i++)
    {
        t=i*num;
        sum=sum+t;

    }
    printf("The sum of table 8 is %d",sum);
    return 0;
}
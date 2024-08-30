/* what I have to do is, create an array of 3x10 and I should have 2,7,9 
malitplication table 

*/
// The below code is wrong and have minor error and done by me:
// #include<stdio.h>
// int main(){
//     int arr[3][10];
//     for (int i = 0; i < 1; i++)
//     {
//         for (int j = 1; j < 11; j++)
//         {
//            arr[i][j]= 2 * j;
//            printf("The malitplication  of 2 x %d is %d\n",j,arr[i][j]);
//         }
//     }
//     for (int i = 1; i < 2; i++)
//     {
//         for (int j = 1; j < 11; j++)
//         {
//            arr[i][j]= 7 * j;
//             printf("The malitplication  of 7 x %d is %d\n",j,arr[i][j]);
//         }
//     }
//     for (int i = 2; i < 3; i++)
//     {
//         for (int j = 1; j < 11; j++)
//         {
//            arr[i][j]= 9 * j;
//             printf("The malitplication  of 9 x %d is %d\n",j,arr[i][j]);
//         }
//     }
  
// }

#include<stdio.h>
int main(){
    int multable[3][10];
    int num[]={2,7,9}; // important !
    for (int i = 0; i < 3; i++)
    {
        for (int j = 1; j < 11; j++)
        {
            multable[i][j]= num[i] * j;
         }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 1; j < 11; j++)
        {
            printf("%d ",multable[i][j]);
        }
        printf("\n");
    }
    return 0;
    
}
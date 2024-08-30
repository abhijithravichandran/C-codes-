#include<stdio.h>
int main()
{
    int i=1,sum=0;
    //int n;
    //printf("enter No. to find sum:");
    //scanf("%d",&n);
    while(i<11){
        sum+=i;
        i++;
    }
    printf("The sum of N natural no. %d",sum);
    return 0;
}

// Using for loop to the above porgram
// int main(){
//     int sum=0;
//     for(int i=0;i<11;i++){
//         sum+=i;
//     }
//     printf("The sum of first 10 natural numbers: %d",sum);
//     return 0;
// }

// Using do while loop for the above porgram
// int main(){
//     int sum=0,i=0;
//     do
//     {
//         i++;
//         printf("The sum of first 10 natural no.: %d\n",sum+=i);
//     } while (i<10);
    
// }
 // here the do statememts will run at least once so I made the cond <10
// In this case it will be run till 10 and stops 
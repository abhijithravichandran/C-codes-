#include<stdio.h>
// int main(){
//     int i=6;
//     while(i>0){
//         i--;
//         if (i!=4)
//         {
//             continue;
//         }
//         else{
//             printf("%d",i);
            
//         }
        
//     }
//     return 0;
// }

// Continue used to skip 
int main()
{
    for (int i = 0; i < 7; i++)
    {
        if (i==3)
        {
            continue;// here do not execute line below 
        } // Here it skips the statement when i=3 and 3 will be printed
        printf("The value of i %d\n",i);
    }
    



    return 0;
}

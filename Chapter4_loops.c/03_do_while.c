#include<stdio.h>
int main(){
    int i=9;
    do
    {
        --i;
        printf("Hello there %d\n",i);
    } while (i!=0);
    

    return 0;
} // will excutes at least once by the complier  

// #include<stdio.h>
// int main(){
//     int i=9;
//     do
//     {
       
//         printf("Hello there %d\n",i);
//     } while (i<7);
    

//     return 0;
// }
// The code in do will excute even the while cond is True or false
// #include<stdio.h>
// int main(){
//     int i=1;
//     do
//     {
       
//         printf(" %d\n",i);
//         i++;
//     } while (i<5);
    

//     return 0;
// }

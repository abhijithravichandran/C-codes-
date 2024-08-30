// #include<stdio.h>
// #include<malloc.h>
// int main(){
//     int *ptr;
//     ptr = (int * ) malloc(30 * sizeof(int)); // Here 
//     // Here int * is type casting, In the above case whatever that will become integer in the malloc
//     ptr[0] = 12;
//     ptr[1] = 22;
//     ptr[2] = 132; 
//     // so on until 30 integer 
//     printf("%d",ptr[1]);
//     return 0;
// }

#include<stdio.h>
#include<malloc.h>
int main(){
    int *ptr;
    int n = 4;
    ptr = (int * ) malloc(n * sizeof(int));
    // Here int * is type casting, In the above case whatever that will become integer in the malloc
    ptr[0] = 12;
    ptr[1] = 22;
    ptr[2] = 132; 
    // so on until 45 integer 
    printf("%d",ptr[1]);
    return 0;
}
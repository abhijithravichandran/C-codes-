#include<stdio.h>
#include<malloc.h>
int main(){
    int *ptr;
    int n = 3;
    ptr = (int * ) malloc(n * sizeof(int));
    // Here int * is type casting, In the above case whatever that will become integer in the malloc
    ptr[0] = 12;
    ptr[1] = 22;
    ptr[2] = 132; 

    // Let me say I want to reallocate the memory for that using function 
    // reallocate function

    ptr = realloc(ptr, 4 * sizeof(int));

    ptr[3] = 45;
     
    printf("%d",ptr[3]);
    return 0;
}
#include<stdio.h>
#include<malloc.h>
int main(){
    int *ptr;
    ptr = (int *) malloc(4 * sizeof(int));
    free(ptr); //This func is used to free the 4 integer memory.
    return 0;
}
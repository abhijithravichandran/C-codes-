#include<stdio.h>
#include<malloc.h>
int main(){
    int *ptr;
    ptr = (int *) calloc(4, sizeof(int));
    ptr[0] = 2;
    printf("%d",ptr[0]);
    return 0;
}
// colloc will have prevalue of zero in the first index and that can be changed 
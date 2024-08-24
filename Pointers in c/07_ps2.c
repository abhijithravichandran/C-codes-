#include<stdio.h>
void fun(int*);
int main(){
    int y=20;
    printf("The address of y %d\n",&y);
    fun(&y);
   
}

void fun(int *p){
    printf("The address of y in function %u",p);
}
#include<stdio.h>
int main(){
    int y=20;
    printf("The address %d\n",&y);
    printf("The value in that address %d",*(&y));
}
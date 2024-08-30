#include<stdio.h>
int change(int,int);

     

int main(){
    int s=22; // Here the value in function doesn't print when value is give in mian fn
    int c=12;
    c=change(s,c);
    printf("b is %d %d",s,c);
    return 0;
}
int change(int a ,int b ){
    int c=77; // It is local variable
    return c;
    }
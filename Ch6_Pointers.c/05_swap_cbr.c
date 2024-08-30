#include<stdio.h>
int swap(int*,int*);
int main(){
    int a=3,b=4;
    printf(" before swapinng value of a and b is %d & %d\n",a,b);
    swap(&a,&b);
    printf(" After swapinng value of a and b is %d & %d\n",a,b);
    return 0;
}
int swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("Within fn value of a is %u and b is %u \n",*x,*y);
    return 0;
}
#include<stdio.h>
int main(){
    int a=6;
    int *p=&a;
    printf("The value of a is %d\n",a);
    printf("The address of a is %d\n",p);
    p=p+2; // Or p=p+1;
    printf("The address is after incremented %d\n",p);
    if (p>&a)
    {
        printf("The address is greater  \nThe difference is %d",p-&a);
    }
    else{
        printf("The address is Not greater");
    }
    return 0;
}
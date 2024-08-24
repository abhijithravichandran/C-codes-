#include<stdio.h>
int tentimes(int*);
int main(){
    int y=20;
    printf("The value before of y %d\n",*(&y));
    tentimes(&y);
   printf("The value after changed of y %d\n",*(&y));
}

int tentimes(int *p){
    *p=*p*10;
    printf("The changed value is %u\nf",*p);
}

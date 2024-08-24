#include<stdio.h>
void sumAvg(float,float, float*,float*);
int main(){
    float a=6,b=429;
    float s,av;
    sumAvg(a,b,&s,&av);
    printf("The sum of two variable is %f\nThe average of two numbers is %f",s,av);
    return 0;
}

void sumAvg(float x,float y,float *sum,float *avg){
    *sum=x+y;
    *avg=(x+y)/2 ;
}
#include<stdio.h>
float tempConvert(double);
int main(){
    double c=1;
    // float f;
    printf("The fahrenhiet %f  ",tempConvert(c));
    return 0;

}

float tempConvert(double c){
    float f= c* (9/5) + 32;
    return  f;
}
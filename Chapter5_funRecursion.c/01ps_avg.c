// Average of three numbers
#include<stdio.h>
double avg(double, double, double);
double main(){
    double a,b,c;
    printf("Eter three numbers a b c to find average:");
    scanf("%lf %lf %lf",&a,&b,&c);
    printf("The average of 3 no. is %lf",avg(a,b,c));


}

double avg(double a,double b,double c){
    double d=(a+b+c)/3;
    return d;
}
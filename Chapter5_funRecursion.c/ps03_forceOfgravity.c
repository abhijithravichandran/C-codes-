// calculate force of attraction of body mass m exerted by earth not this Q
// Gratvitaional force
#include<stdio.h>
double ForceOfattraction(float, float,float);
double ForceOfattraction(float m1, float m2, float d){
    int g=9.8,f;
    f=g*m1*m2/(d*d);
    return f;
}
int main(){
    float m1,m2,d;
    printf("Enter the value of m1:m2: and distance:");
    scanf("%f %f %f",&m1,&m2,&d);
    double c=ForceOfattraction(m1,m2,d);
    printf("The force of attraction is %lf",c);
    return 0;
}
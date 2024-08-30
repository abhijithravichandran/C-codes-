// Array of structure 
#include<stdio.h>
#include<string.h>
struct empolyee
{
    int salary;
    float hike;
    char name[30];
};

int main(){
    struct empolyee facebook[10];
    strcpy(facebook[0].name,"harry");
    facebook[0].salary = 5400000;
    facebook[0].hike = 1.4;

    printf("The name of the employee %s\n",facebook[0].name);
    printf("The hike of theemployee %f\n",facebook[0].hike);
    printf("The salary of the employee%d\n",facebook[0].salary);


}
#include<stdio.h>
#include<string.h>
struct employee // Datatype name like int, float or string - the whole struct employee is datatype as int or sting
{
    int salary;
    float hike;
    char name[20];
};
// struct employee contain 3 datatypes wihtin that 
int main(){
    int a = 45;  // this and struct below are same 
    struct employee harry = {200000,2.3,"abhi"};

    printf("The name of the employee %s\n",harry.name);
    printf("The salary of the employee %d\n",harry.salary);
    printf("The hike of the employee %f\n",harry.hike);

    
}
// Using typedef keyword, I created the struct empolyee into emp....
#include<stdio.h>
#include<string.h>
typedef struct empolyee
{
    int salary;
    float hike;
    char name[30];
} emp;

int main(){
    emp facebook[10]; 
    emp *ptr = &facebook[0];
    strcpy(facebook[0].name,"harry");
    facebook[0].salary = 5400000;
    facebook[0].hike = 1.4;

    printf("The name of the employee %s\n",(*ptr).name);
    printf("The hike of the employee %f\n",(*ptr).hike);
    printf("The salary of the employee%d\n",(*ptr).salary);
    printf("\n");
    printf("The name of the employee %s\n",ptr->name);
    printf("The hike of the employee %f\n",ptr->hike);
    printf("The salary of the employee%d\n",ptr->salary);
    return 0;

}
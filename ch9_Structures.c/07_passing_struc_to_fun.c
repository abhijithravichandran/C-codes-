#include<stdio.h>
#include<string.h>

struct employee {
    int salary;
    float hike;
    char name[10];
};

void show(struct employee e){ // The change of e.hike will not reflect in main
    e.name[0] = 'P';
    printf("The name of Employee is %s\n", e.name);
    printf("The salary of Employee is %d\n", e.salary);
    printf("The hike of Employee is %f\n", e.hike);
    e.hike = 4.55;
}

void showRef(struct employee *e){
    (*e).name[0] = 'P'; // But here it will reflect in main because pointer is used 
    printf("The name of Employee is %s\n", e->name);
    printf("The salary of Employee is %d\n", e->salary);
    printf("The hike of Employee is %f\n", e->hike);
    (*e).hike = 4.55;
}

int main(){
    struct employee harry = {34, 5.2, "Harry"};
    showRef(&harry);
    printf("The name of Employee is %s\n", harry.name);
    printf("The salary of Employee is %d\n", harry.salary);
    printf("The hike of Employee is %f\n", harry.hike);
    return 0;
}
// If we call showref then it will reflect and if we call show it will not08
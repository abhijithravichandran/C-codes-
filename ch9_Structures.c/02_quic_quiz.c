#include<stdio.h>
#include<string.h>
struct employee{ // THis is a dataype and it has 3 datatypes within itself 
    int salary;
    float hike;
    char name[20];

};
int main(){
    struct employee abhijith, srikant, roshan; // In this datatype I had created 3 variable of struct employee datatype.....
    printf("Enter the details of abhijith\n");
    printf("Enter the name for abhijith \n");
    scanf("%s",abhijith.name);
    printf("Enter the salary for abhijith \n");
    scanf("%d",&abhijith.salary);
    printf("Enter the hike for abhijith \n");
    scanf("%f",&abhijith.hike);
    
    printf("Enter the details of srikant\n");
    printf("Enter the name for srikant \n");
    scanf("%s",srikant.name);
    printf("Enter the salary for srikant \n");
    scanf("%d",&srikant.salary);
    printf("Enter the hike for srikant \n");
    scanf("%f",&srikant.hike);
    
    printf("Enter the details of Roshan\n");
    printf("Enter the name for roshan \n");
    scanf("%s",roshan.name);
    printf("Enter the salary for roshan \n");
    scanf("%d",&roshan.salary);
    printf("Enter the hike for roshan \n");
    scanf("%f",&roshan.hike);

    printf("The name of the abhijith %s\n",abhijith.name);
    printf("The salary of the abhijith %d\n",abhijith.salary);
    printf("The hike of the abhijith %f\n",abhijith.hike);

    printf("The name of the employee %s\n",srikant.name);
    printf("The salary of the employee %d\n",srikant.salary);
    printf("The hike of the employee %f\n",srikant.hike);

    printf("The name of the employee %s\n",roshan.name);
    printf("The salary of the employee %d\n",roshan.salary);
    printf("The hike of the employee %f\n",roshan.hike);

     
}

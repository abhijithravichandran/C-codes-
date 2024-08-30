#include<stdio.h>
#include<string.h>
struct employee{ // THis is a dataype and it has 3 datatypes within itself 
    int salary;
    float hike;
    char name[20];

};
int main(){
    struct employee facebook[3]; // In this datatype I had created 3 variable of struct employee datatype.....
    printf("Enter the details of abhijith\n");
    printf("Enter the name for abhijith \n");
    scanf("%s",facebook[0].name);
    printf("Enter the salary for abhijith \n");
    scanf("%d",&facebook[0].salary);
    printf("Enter the hike for abhijith \n");
    scanf("%f",&facebook[0].hike);
    
    printf("Enter the details of srikant\n");
    printf("Enter the name for srikant \n");
    scanf("%s",facebook[1].name);
    printf("Enter the salary for srikant \n");
    scanf("%d",&facebook[1].salary);
    printf("Enter the hike for srikant \n");
    scanf("%f",&facebook[1].hike);
    
    printf("Enter the details of Roshan\n");
    printf("Enter the name for roshan \n");
    scanf("%s",facebook[1].name);
    printf("Enter the salary for roshan \n");
    scanf("%d",&facebook[1].salary);
    printf("Enter the hike for roshan \n");
    scanf("%f",&facebook[1].hike);

    printf("The name of the abhijith %s\n",facebook[0].name);
    printf("The salary of the abhijith %d\n",facebook[0].salary);
    printf("The hike of the abhijith %f\n",facebook[0].hike);

    printf("\n");
    printf("The name of the employee %s\n",facebook[1].name);
    printf("The salary of the employee %d\n",facebook[1].salary);
    printf("The hike of the employee %f\n",facebook[1].hike);
    printf("\n");
    printf("The name of the employee %s\n",facebook[1].name);
    printf("The salary of the employee %d\n",facebook[1].salary);
    printf("The hike of the employee %f\n",facebook[1].hike);

     
}
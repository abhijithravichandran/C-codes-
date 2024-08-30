#include<stdio.h>
struct improvement_index
{
    int num;
    char name[20];
    float growth;
};

int main(){
    struct improvement_index v1 = {1,"abhijith",100.0};
    struct improvement_index v2 = {40,"salman",98.2};
    struct improvement_index *ptr = &v1;
    struct improvement_index *ptr2 = &v2;
    
    printf("The name is %s and the growth percent %f\n",ptr->name,ptr->growth);
    printf("The name is %s and the growth percent %f",ptr2->name, ptr2->growth);
    return 0;

}
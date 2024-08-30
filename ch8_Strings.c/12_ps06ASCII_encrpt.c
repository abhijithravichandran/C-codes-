// Encript
#include<stdio.h>
#include<string.h>
int main(){
    char name[10] = "harry";
    for (int i = 0; i <5; i++)
    {
        // printf("%d",name[i]);
        name[i] ++ ;  // this will increment ASCII value by 1

    }
    printf("%s",name);
    for (int i = 0; i <5; i++)
    {
        // printf("%d",name[i]);
        name[i] -- ;  // THis is for De-crpty

    }
    printf("\n%s",name);
    return 0;
    }
    
#include<stdio.h> //ps08
int main(){
    int mult[3][10];
    int num[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter number:");
        scanf("%d",&num[i]);
        for (int j = 0; j < 10; j++)
        {
            mult[i][j]= num[i] * (j+1);
            printf("%d ",mult[i][j]);

        }
        printf("\n");
    }
    return 0;
}
// Creating an dynamic array of 5 floats using malloc() -(creating dynamic array)
#include<Stdio.h>
#include<malloc.h>
int main(){
    float *ptr;
    ptr = (float *) malloc (3* sizeof(float));
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value for dynamic array of %d: ",i);
        scanf("%f",&ptr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf(" The value for dynamic array is %0.2f\n",ptr[i]);
    }
    return 0;
}
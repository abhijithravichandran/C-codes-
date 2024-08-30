#include<stdio.h>
int main(){
    int a[4]={12,3,45,1};
    int min=a[0];
    for (int i = 0; i < 4; i++)
    {
        if (min>a[i])
        {
          min=a[i];  
        }
        
    }
    printf("The min %d",min);
    return 0;
}
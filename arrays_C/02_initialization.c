#include<stdio.h>
int main(){
    int mark[3]={23,44,56};
    for (int i = 0; i < 3; i++)
    {
        printf("The mark of student %d is %d\n",i+1,mark[i]);
    }
    return 0;
    
}
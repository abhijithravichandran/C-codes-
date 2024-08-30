//  Sorting in minimum order
#include<stdio.h>
int main(){
    int a[4]={12,3,45,1};
    int min_i;
    for (int i = 0; i < 4; i++){
        min_i=i;
        for(int j=i+1;j<4;j++){
            if (a[j]<min_i)
            {
               min_i=j;
            }
            int t=a[i];
            a[i]=a[min_i];
            a[min_i]=t;

            }  
    }
    // printf("The min %d",min_i);
    return 0;
}
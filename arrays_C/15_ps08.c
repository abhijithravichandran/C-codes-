// Printing address of 3D array
#include<stdio.h>
int main(){
    int arr[1][2][6];
    for (int i = 0; i < 1; i++)
    {
      for (int k = 0; k < 2; k++)
    {
        for (int j = 0; j < 6; j++)
    {
        printf("%u ",&arr[i][k][j]);
        
    }   
    }   
    }
    
}
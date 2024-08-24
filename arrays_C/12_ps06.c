/*
    what I need to do is, create an function which counts + integers in array 
    so, to do that I should have loops,function.
    Q? does pointer needed - No
*/

#include<stdio.h>
int countpositive(int a[],int n){
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]>0)
        {
           count+=1;
        }
        
    }
    printf("The total positive no. in the array is %d",count);
    
}
int main(){
    int arr[]={1,2,-4,-56,90,0,4,5};
    countpositive(arr,8);

}
// #include<stdio.h>
// int rev(int *);
// int main(){
//     int arr[10]={1,22,32,42,5,44};
//     rev(&arr[5]);
//     return 0;
// }
// int rev(int *ptr){
//      for(int i=0;i<6;i++){
//        printf("The reversed array is %d \n",*(ptr--));
//     }
//     return 0;
// }
//-----------------------------------------------------------------
#include<stdio.h>
int reverse(int a[],int n){
    int temp;
    for (int i = 0; i < n/2; i++) // n/2 gives integer NOT float value
    { 
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    return 0;
}

int display(int *,int);

int main(){
    int arr[10]={1,2,3,4,5,6};
    display(arr,6);

    reverse(arr,6);
    display(arr,6);
}
int display(int *ptr,int n){ // Why? using pointer because changing value
    for (int i = 0; i < n; i++)  // in another function so using ptr
    {
        printf("%d ",*(ptr++));
    }
    printf("\n");
    return 0;    
}
// Lots of things I yet to [understand and I will with help ChatGPT]
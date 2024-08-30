#include<stdio.h>
// int main(){
//     int a=2;
//     printf("%d %d %d\n",a,++a,a++);
//     return 0;
// }
// here the complier executes right from left 
// but don't use this in program because different complier excutes in diiferent way
int range(int a,int b){

    int i=a,range=0;
    while(a<=i && i<=b){
        range=i;
        printf("%d",i);
        i++;
    }
}
int main(){
    int a=3,b=7;
    range(a,b);
    return 0;
}
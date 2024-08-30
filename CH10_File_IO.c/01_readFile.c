#include<stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("sample.txt","r"); // r is given in double quotes because 
    char ch;                                //  mode is string in c
    fscanf(ptr,"%c",&ch);
    printf("The character of ch is %c",ch);
    return 0; 
}
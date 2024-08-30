// Checking the file exist or Not
#include<stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("sample.txt","r"); 
    // if(ptr == NULL){
    //     printf("It is NULL\n");
    // }
    // else{
    //     printf("The file exist\n");
    // }
    char ch;
    fscanf(ptr,"%c",&ch);
    // If the file doesn't exist then the printf will return NULL 
    printf("The character of ch is %c",ch);
    fclose(ptr);
    return 0; 
}
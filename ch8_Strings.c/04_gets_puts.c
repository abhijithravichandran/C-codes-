#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    printf("Enter a string\n");
    gets(str);
    printf("%s",str);
    // puts(str);  //Both can be used  
    return 0;
}
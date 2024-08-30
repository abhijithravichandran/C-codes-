// Using loop print the string word by word...
#include<stdio.h>
int main(){
    char str1[]="harry";
    for (int i = 0; i < 6; i++)
    {
        printf("%c", str1[i]);//F.s is %c because now it character   
    }                        // Because it is single character 
    return 0;
}
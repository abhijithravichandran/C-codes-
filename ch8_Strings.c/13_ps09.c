// Checking the character in the string or Not...
#include<stdio.h>
#include<string.h>
int main(){
    char str[30];
    printf("Enter the string: ");
    scanf(" %s",str);
    char find;
    printf("Enter the letter to find the Occurence");
    scanf(" %c",&find);
    int count=0;
    for (int i = 0; str[i] != 0; i++)
    {
        if (find == str[i])
        {
            count= 1; // Non zero is true
            printf("The character is present in the string ");
            break;
        }
        else{
            count = 0; // zero is false 
        } 
    }
    if (count==0 )
    {
        printf("The entered character is not present in the string");
    }
    
    
    return 0;
    
}
#include<stdio.h>
#include<string.h>
int main(){
    char str[30];
    printf("Enter the string");
    scanf(" %s",str);
    char find;
    printf("Enter the letter to find the Occurence");
    scanf(" %c",&find);
    int count=0;
    for (int i = 0; str[i] != 0; i++)
    {
        if (find == str[i])
        {
            count=count + 1;
        }
        else{
            continue;
        }
    }
    printf("The enter word Occurence is %d",count);
    return 0;
    
}
#include<stdio.h>
// int main(){
//     printf("The value is %d",'a');
    
// }

int main()
{
    char charcater;// Here we are getting in Char datatype a
    printf("Enter a character to check Upper/lowercase:");
    scanf("%c",&charcater);// Getting the input in charcter type
    if(charcater>=97 && charcater<=122){
        printf(" The character '%c'is lowercase ",charcater);
        } // Every charcter has integer value as ascii value 
    else if (charcater>=65 && charcater<=90)
    {
        printf("The given character  is uppercase");
    }else{
        printf("Invalid ");
    }
    
    return 0;
}
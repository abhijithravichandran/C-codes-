#include<stdio.h>
#include<string.h>
int main(){
    char str[6];
    printf(" Enter a string of length 5 with percentage c ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%c",&str[i]);
        fflush(stdin); // This is for removing the enter key in string 
    } // String will consider the enter key and to remove that I used the above 
    str[5] = '\0';
    printf("Comparing this string harry gives %d", strcmp("harry",str));
    return 0;
}
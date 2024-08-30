// Copy of string and it hard kind of
#include<stdio.h>
#include<string.h>
int mystrcpy(char * st){
    char *ptr = st;
    char copy[100];
    int j = 0;
    for (int i = 0; st[i]!= 0  ; i++)
    {
        copy[j] = st[i];
        j++;
    }
    copy[j] = '\0';
    printf("%s",copy); 
    return 0;
    
}
int main(){
    char str[] = "Abhijith";
    mystrcpy(str);
    printf("\nOrginal string %s",str);
    return 0;
}

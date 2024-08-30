#include<stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("writeFile.txt","w"); 
    int i = 12;
    fprintf(ptr,"%d",i);
    // If the file doesn't exist then the printf will return NULL 
    // printf("The character of ch is %c",i);
    fclose(ptr);
    return 0; 
}
// In writeFile I get the 12......
// We have successful write the text file and created 
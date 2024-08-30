#include<stdio.h>
// int main(){
//     FILE *ptr;
//     ptr = fopen("fgetcputc.txt","w");
//     // fputc('c', ptr); // Only can give single character 
    
//     fclose(ptr);
//     return 0; 
// }

int main(){
    FILE *ptr;
    // ptr = fopen("fgetcputc.txt", "w");  
    // fputc('c', ptr);

    ptr = fopen("fgetcputc.txt", "r");  
    char ch = fgetc(ptr);
    printf("The value of ch is %c\n", ch);
    ch = fgetc(ptr);
    printf("The value of ch is %c\n", ch);
    ch = fgetc(ptr);
    printf("The value of ch is %c\n", ch);
    fclose(ptr);
    return 0;
}
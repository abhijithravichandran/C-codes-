#include<stdio.h>
#include<string.h>
// int main(){
//     char str[10]="abhijith";
//     int count=0;
//     for (int i = 0; str[i]!='\0'; i++)
//     {
//         count= count + 1;
//     }
//     printf("The length of the string is %d",count);
//     return 0;
// }
int mystrlen(char * st){
  int length = 0;
  char* ptr = st;
  while (*ptr!='\0')
  {
    length++;
    ptr++;
  }
  printf("The length of the string is %d",length);
  return 0;

}
int main(){
    char str[]="abhijith.r";
    mystrlen(str);
}
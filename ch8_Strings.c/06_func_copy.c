#include<Stdio.h>
#include<string.h>
int main(){
    char str[]="abhijith";
    char target[40];
    char copy= strcpy(target, str);
    printf("The copy of str in target is %s\n",target);
    printf("The str is %s\n",str);
    return 0;
}
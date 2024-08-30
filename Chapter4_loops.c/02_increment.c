#include<stdio.h>
int main(){
    int i=9;
    printf("%d",i++);
    /*The output is 10 and why because here 
     i is printed and then incremented(becomes 11) i++ means
     that   */
    // if ++i is in print then first increment happens and then 
    // i prints - here output is 10
    printf("\n%d",++i);
    return 0;
}
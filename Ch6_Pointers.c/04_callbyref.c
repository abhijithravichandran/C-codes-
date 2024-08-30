#include<Stdio.h>
int sum(int*,int*);
int main(){
    int x=5;
    int y=4;
    printf("The value of X + Y %d\n",sum(&x,&y));
    printf("The value of X  %d and y %d\n",x,y);
    return 0;

}
int sum(int *a,int *b){
    *a=56;
    return *a + *b;
}
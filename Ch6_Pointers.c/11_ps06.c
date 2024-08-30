#include<stdio.h>
int change(int);
int main(){
    int a=10;
    change(a);
    printf("The after function, value is %d\n",a);
}

int change(int x){
    x=x*10;
    printf("The value wihtin function %d\n",x);

}
// here only the copy of is sent to the argument and that is because the value not changing 
/*
    example,
        A copy of keyboard is given to my friend and he has 
        broken the keyboard and does that mean my keyboard also
        broken NO. Because it is the copy...
*/
#include<Stdio.h>
// void display(); // Function prototype
// int main(){
//     int a;
//     display(); // Function call // Arguments will be in this fn call
//     printf("I am going to be great");
//     return 0;
//    }
//    // Function definition
//     void display(){ // Parameters will be in this code fn definition
//     printf("Hello world1\n");
//     printf("Hello world2\n"); 
//     printf("Hello world3\n");
//    }

void good_morning();
void good_evening();
void good_night();

int main(){
    good_morning();
    good_evening();
    good_night();
    printf("The program is over");
    return 0;
}

void good_evening(){
    printf("Good evening!\n");
}
void good_morning(){
    printf("Good Morning!\n");
}
void good_night(){
    printf("Good Night!\n Sweat dreams\n");
}
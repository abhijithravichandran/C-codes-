#include<stdio.h>
// int main(){
// scenario 1
    // int age=45;
//     if(age>18){
    //     printf("You are eligible for driving");

    // }
    // else if(age>15){
    //     printf("you are not eligible but let us find toy car for you");
    // }
    // else{
    //     printf("you ARE NOT ELIGIBLE FOR DRIVING");
    // }
    // return 0;
// the whole code is one entity so only one output, once the first
// condition is true then other conditions are not executed....
// scenario 2
//     if(age>18){
//          printf("You are eligible for driving\n");

//      }
//     if(age>15){
//          printf("you are not eligible but let us find toy car for you");
//      }
//     else{
//          printf("you ARE NOT ELIGIBLE FOR DRIVING");
// } }// here the each code is separate entity and everycode will executed 
//like after the first condition is True

//Student mark Grade
#include<stdio.h>
int main(){
    int mark;
    printf("Enter the Mark:");
    scanf("%d",&mark);
    if(mark>80 && mark<=100 ){
        printf("Grade A");
    }
    else if(mark>60 && mark<=80){
        printf("Grade B");
    }
    return 0;     
}
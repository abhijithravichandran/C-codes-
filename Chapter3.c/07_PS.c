#include<stdio.h>
int main(){
    int income;
    float tax=0;
    printf("Enter the income in Lakh:");
    scanf("%d",&income);
    if(income>=2.5 && income<=5){
        printf("The tax is 5%% for the income %dLakhs",income);
        tax=(5*income)/100.0;
        printf("\nThe tax amount is %f",tax);
    }
    else if(income>5 && income<10 ){
        printf("The tax is 20%% for the income %dLakhs",income);
         tax=(20*income)/100.0;
        printf("\nThe tax amount is %f",tax);
    }
    else if(income>10 ){
        printf("The tax is 30%% for the income %d Lakhs",income);
        tax=(30*income)/100.0;
        printf("\nThe tax amount is %f",tax);
    }
    else{
        printf("No Tax ");
    }
    return 0;
    
}
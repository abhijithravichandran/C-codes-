// for checking ATM by me
#include<stdio.h>
int main(){
    int check,withdraw,balance=2000,add;
    printf("Enter number 1 to check balance/no.2 withdraw amount/no.3 add money:");
    scanf("%d",&check);
    switch (check)
    {
    case 1:
        printf("the bank balance:%d",balance);
        break;
    
    case 2:
        printf("the money to withdraw:");
        scanf("%d",&withdraw);
        balance=balance-withdraw;
        printf("The balance:%d",balance);
        break;
    case 3:
        printf("Add money to acc:");
        scanf("%d",&add);
        balance=balance+add;
        printf("the balance:%d",balance);
        break;

    default:
        break;
    }
    return 0;
}


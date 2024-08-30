#include<stdio.h>
#include<Stdlib.h>
#include<time.h>
int main(){
    int number,guess,nguessess=1;
    srand(time(0));
    number= rand()%100 +1;
    do
    {
        printf("Guess the number between 1 to 100:\n");
        scanf("%d",&guess);
        if (guess>number)
        {
            printf("The lower the number\n");
        }
        else if (guess<number)
        {
            printf("The greater the number\n");
        }
        else 
        {
            printf("Yayy your guess is correct\nThe attempt of guessing %d",nguessess );
        }
        nguessess++;
    } while (guess!=number);
    return 0;
    
}
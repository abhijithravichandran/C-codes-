#include<stdio.h>
struct com
{
    int month;
    int year;
    int day;

};
int compare(struct com, struct com);
int main(){
    struct com dates[4];
    dates[0].day = 2;
    dates[0].year = 2004;
    dates[0].month = 6;

    dates[1].day = 2;
    dates[1].year = 2005;
    dates[1].month = 2;
    compare(dates[0],dates[1]);
    return 0;

}
int compare(struct com a1, struct com a2){
    
    for (int i = 0; i < 1; i++)
    {
        if (a1.year < a2.year){
            printf("The %d is older\n",a1.year);
            if (a1.month > a2.month)
            {
                printf("The first is older and by %d years and %d months\n",(a2.year-a1.year),(a1.month-a2.month));
            }
            
        }
        else if (a1.year > a2.year){
            printf("The %d is older\n",a2.year);
        }
    }
    return 0;
    
}
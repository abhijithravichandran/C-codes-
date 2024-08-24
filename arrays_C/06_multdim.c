#include<stdio.h>
int main(){
    //int marks[2][4];
    int marks[2][4]={{99, 91,89,83},{65,55,45,38}};
    // marks[0][0]=99;
    // marks[0][1]=91;
    // marks[0][2]=89;
    // marks[0][3]=83;

    // marks[1][0]=65;
    // marks[1][1]=55;
    // marks[1][2]=45;
    // marks[1][3]=38;
    for (int i = 0; i < 2; i++ )
    {
        for(int j=0;j<4;j++){
            printf("%d ",marks[i][j]);
        }
        printf("\n");
    }
    return 0;

}
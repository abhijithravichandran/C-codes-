// // Create 2d array by taking input and display it by function
// #include<stdio.h>
// int display(int[][3] );
// int main(){
//     int marks[2][3];
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j= 0; j < 3; j++)
//         {
//             printf("Enter the values for array %d %d\n",i,j);
//             scanf("%d",&marks[i][j]);
//         }
        
//     }
//     display(marks);
    
// }
//     int display(int marks[2][3]){
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d ",m[i][j]);
//         }
//         printf("\n");
//     }
    
// }

#include<stdio.h>

void display(int[][3]); // Function prototype

int main() {
    int marks[2][3];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter the values for array %d %d\n", i, j);
            scanf("%d", &marks[i][j]);
        }
    }
    display(marks);
    return 0;
}

void display(int m[][3]) { // Function definition
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

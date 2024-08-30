// Incorrect...........

// #include<stdio.h>
// #include<stdio.h>
// int slice(char* st){
//     int m,n;
//     char pop,temp;
//     printf("Enter the range m,n to slice the string:");
//     scanf("%d %d",&m,&n);
//     for (int i = 1; st[i]!='\0'; i++)
//     {
//         if (i<=n  )
//         {
//             pop = st[i];
            
//         }
//         else{
//             temp = st[i];
//         }
        
//     }
//     printf("The sliced string is %s",temp);
// }
// int main(){
//     char str[]="abhijithakdbf";
//     slice(str);
//     return 0;
// }

#include<stdio.h>

void slice(char* st) {
    int m, n;
    printf("Enter the range m,n to slice the string: ");
    scanf("%d %d", &m, &n);

    // Ensure m and n are within the length of the string
    if (m < 0 || m >= n) {
        printf("Invalid range.\n");
        return;
    }

    // Slice the string
    char sliced[100]; // Assuming max size of sliced string
    int j = 0;
    for (int i = m; i <= n && st[i] != '\0'; i++) {
        sliced[j] = st[i];
        j++;
    }
    sliced[j] = '\0'; // Null-terminate the sliced string

    printf("The sliced string is: %s\n", sliced);
}

int main() {
    char str[] = "abhijithakdbf";
    slice(str);
    return 0;
}

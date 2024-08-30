// Creating  two dimenisonal vector
#include<stdio.h>
struct twodimVector
{
    int x;
    int y;
};

int main(){
    struct twodimVector v1 = {1,4};
    struct twodimVector v2 = {12,54};
    printf("%di + %dj",v1.x,v1.y);
    printf("\n%di + %dj", v2.x,v2.y);
    return 0;
}
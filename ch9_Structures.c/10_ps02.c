#include<stdio.h>
struct twodimVector
{
    int x;
    int y;
};
 struct twodimVector sum(struct twodimVector first, struct twodimVector second) {
    int a,b;
    a = first.x + second.x;
    b = first.y + second.y;
    struct twodimVector result = {a,b};
    return result;

}
int main(){
    struct twodimVector v1 = {1,4};
    struct twodimVector v2 = {12,54};
    // printf("The sum of two vector is %di + %dj",(v1.x) + (v2.x),v1.y + (v2.y));
    struct twodimVector v3 = sum(v1,v2); 
    printf("%di + %dj",v3.x,v3.y);
    return 0;
} 
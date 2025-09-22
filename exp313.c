#include <stdio.h>
int main() {
    int x1,y1,x2,y2,x3,y3;
    printf("Enter three points (x1 y1 x2 y2 x3 y3): ");
    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);

    if((y2-y1)*(x3-x2) == (y3-y2)*(x2-x1))
        printf("Points are Collinear\n");
    else
        printf("Points are Not Collinear\n");
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int x1,x2,x3,a1,a2,a3,b1,b2,b3,c1,c2,c3;
    scanf("%d%d%d",&x1,&x2,&x3);
    a1 = abs(x1-x2);
    b1 = abs(x1-x3);
    c1 = a1 + b1;
    a2 = abs(x2-x1);
    b2 = abs(x2-x3);
    c2 = a2 + b2;
    a3 = abs(x3-x1);
    b3 = abs(x3-x2);
    c3 = a3 + b3;
    if (c1<c2) {
        if (c1<c3)
            printf("%d\n",c1);
        else
            printf("%d\n",c3);
    }
    else if (c2<c3)
        printf("%d\n",c2);
    else
        printf("%d\n",c3);
    return 0;
}

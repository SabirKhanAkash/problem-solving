#include<stdio.h>
int main()
{
    int w,y,temp;
    scanf("%d%d",&y,&w);
    if (y>=w)
        temp = 7 - y;
    else
        temp = 7 - w;
        if (temp==1) printf("1/6\n");
        else if (temp==2) printf("1/3\n");
        else if (temp==3) printf("1/2\n");
        else if (temp==4) printf("2/3\n");
        else if (temp==5) printf("5/6\n");
        else if (temp==6) printf("1/1\n");
    return 0;
}

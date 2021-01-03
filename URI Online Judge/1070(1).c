#include<stdio.h>
int main()
{
    int X,i;
    scanf("%d",&X);
    for(i=X;i<=(X+12);i++)
    {
        if(i%2==0)
            continue;
        printf("%d\n",i);
    }

    return 0;
}

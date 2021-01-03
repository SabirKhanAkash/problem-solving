#include<stdio.h>
int main()
{
    int i,X,Y,T;
    for (i=1 ; ; i++)
    {
        scanf("%d%d",&X,&Y);
        if (X>Y)
            printf("Decrescente\n");
        else if (X<Y)
            printf("Crescente\n");
        else if (X==Y)
            break;
    }

    return 0;
}

#include<stdio.h>
int main()
{
    int N,X,Y,i;
    scanf("%d",&N);
    for (i=1 ; i<=N ; i++)
    {
        scanf("%d%d",&X,&Y);
        if (Y!=0)
            printf("%0.1f\n",(float)X/Y);
        else
            printf("divisao impossivel\n");

    }

    return 0;
}

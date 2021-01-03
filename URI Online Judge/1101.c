#include<stdio.h>
int main()
{
    int M,N,i,j,sum=0;
    for (i=1 ; ; i++)
    {
        scanf("%d%d",&M,&N);
        if (M<=0 || N<=0)
        break;
        else if (M>N)
        {
            for (j=N ; j<=M ; j++)
            {
                printf("%d ",j);
                sum+=j;
            }
            printf("Sum=%d\n",sum);
            sum=0;
        }
        else if (N>M)
        {
             for (j=M ; j<=N ; j++)
            {
                printf("%d ",j);
                sum+=j;
            }
            printf("Sum=%d\n",sum);
            sum=0;
        }
    }

    return 0;
}

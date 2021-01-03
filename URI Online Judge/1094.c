#include<stdio.h>
int main()
{
    int N,Total=0,Amount=0;
    char Type;
    int C,R,S;
    scanf("%d",&N);
    C = R = S = Total = 0;

    while(N--)
    {
        scanf("%d%c",&Amount,&Type);
        if ('C' == Type)
            C+=Amount;
        else if ('R' == Type)
            R+=Amount;
        else if ('S' == Type)
            S+=Amount;
        Total +=Amount;
    }
        printf("Total: %d cobaias\n",Total);
        printf("Total de coelhos: %d\n",C);
        printf("Total de ratos: %d\n",R);
        printf("Total de sapos: %d\n",S);
        printf("Percentual de coelhos: %0.2f %%\n",(C*100.0)/Total);
        printf("Percentual de ratos: %0.2f %%\n",(R*100.0)/Total);
        printf("Percentual de sapos: %0.2f %%\n",(S*100.0)/Total);
    return 0;
}

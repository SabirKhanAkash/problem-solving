#include<stdio.h>
int main()
{
    int T,i,j,N,dust[1010],sum=0;
    scanf("%d",&T);
    for (i = 1 ; i<=T ; i+=1) {
        scanf("%d",&N);
        for (j = 0 ; j<N ; j+=1) {
            scanf("%d",&dust[j]);
            if (dust[j] > 0)
                sum += dust[j];
        }
        printf("Case %d: %d\n",i,sum);
        sum = 0;
    }
    return 0;
}

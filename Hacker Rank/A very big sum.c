#include<stdio.h>
int main()
{
    long long int sum=0,A[100];
    int i,N;
    scanf("%d",&N);
    for (i=1 ; i<=N ; i++)
    {
        scanf("%lld",&A[i]);
        sum=sum+A[i];
    }
    printf("%lld",sum);
    return 0;
}

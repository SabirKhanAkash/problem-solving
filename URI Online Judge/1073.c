#include<stdio.h>
int main()
{
    long long int i,N;
    scanf("%lld",&N);
    for (i=2; i<=N ; i+=2)
        printf("%lld^2 = %lld\n",i,i*i);
return 0;
}

#include<stdio.h>
#include<stdlib.h>

int main()
{
    long int a,b,T,i;
    scanf("%ld",&T);
    for (i=1 ; i<=T ; i++)
    {
        scanf("%ld%ld",&a,&b);
        printf("Case %ld: %ld\n",i,(4*abs(a-b)+3+5+3+4*abs(a-0)+3+5));
    }

    return 0;
}

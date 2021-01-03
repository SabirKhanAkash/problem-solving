#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long int x,w,n,k,sum=0,r;
    scanf("%lld%lld%lld",&k,&w,&n);
    for (x = 1 ; x <= n; x+=1)
        sum+=k*x;
    if (sum>w) {
        r = abs(sum - w);
        printf("%lld\n",r);
    }
    else
        printf("0\n");
    return 0;
}

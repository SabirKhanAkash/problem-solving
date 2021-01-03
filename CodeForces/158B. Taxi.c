#include<stdio.h>
int main()
{
    long long sum=0,n,i,a[100000];
    scanf("%lld",&n);
    for (i = 0 ; i<n ; i+=1) {
        scanf("%lld",&a[i]);
        sum += a[i];
    }
    if ((sum%4)==0)
        printf("%lld\n",(sum/4));
    else
        printf("%lld\n",(sum/4)+1);

    return 0;
}

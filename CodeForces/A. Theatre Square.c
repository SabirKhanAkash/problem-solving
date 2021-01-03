#include<stdio.h>
int main()
{
    long long int n,m,a;
    scanf("%lld%lld%lld",&n,&m,&a);

    if ((n%a)!=0 && (m%a)!=0)
    {
        printf("%lld\n",((n/a)+1)*((m/a)+1));
    }
    else if ((n%a)==0 && (m%a)!=0)
    {
        printf("%lld\n",(n/a)*((m/a)+1));
    }
    else if ((n%a)!=0 && (m%a)==0)
    {
        printf("%lld\n",((n/a)+1)*(m/a));
    }
    else
    {
        printf("%lld\n",(n/a)*(m/a));
    }

    return 0;
}

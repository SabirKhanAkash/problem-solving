#include<stdio.h>
int main()
{
    long long int a,b,c,d,e,T,i;
    scanf("%lld",&T);
    for (i=1 ; i<=T ; i++)
    {
        scanf("%lld%lld%lld",&a,&b,&c);
        if ((c>a && c>b))
        {
            d=c*c;
            e=(b*b)+(a*a);
        }
        else if  ((b>a && b>c))
        {
            d=b*b;
            e=(c*c)+(a*a);
        }
        else if ((a>b && a>c))
           {
            d=a*a;
            e=(b*b)+(c*c);
           }

            if(d==e)
                printf("Case %d: yes\n",i);
            else
                printf("Case %d: no\n",i);

    }

    return 0;
}

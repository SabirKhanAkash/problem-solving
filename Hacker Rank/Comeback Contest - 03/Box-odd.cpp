#include<bits/stdc++.h>
#define ld long double
#define sll(x) scanf("%lld",&x)
#define si(x) scanf("%d",&x)
#define sd(x) scanf("%lf",&x)
#define l(n,t) for(int i=n;i<=t;i++)
#define Pi 3.14159265359
using namespace std;
int main()
{
    double n,r;
    int t;
    si(t);
    l(1,t)
    {
        sd(n);
        r = sqrt(n)/2.00;
        printf("Case %d: %0.6lf\n",i,Pi*r*r);
        r = 0;
    }
    return 0;
}

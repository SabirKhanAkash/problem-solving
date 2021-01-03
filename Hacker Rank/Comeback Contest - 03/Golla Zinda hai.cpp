#include<bits/stdc++.h>
#define ld long double
#define ll long long
#define sll(x) scanf("%lld",&x)
#define si(x) scanf("%d",&x)
#define sd(x) scanf("%lf",&x)
#define l(n,t) for(int i=n;i<(t+n);i++)
using namespace std;
int main()
{
    ll xg,yg,xb,yb,rg,rb;
    sll(xg);
    sll(yg);
    sll(rg);
    sll(xb);
    sll(yb);
    sll(rb);
    if((sqrt(((xg-xb)*(xg-xb))+((yg-yb)*(yg-yb))))==(rg+rb))
        cout<<"Allah... Tomar kache bichar dilam"<<endl;
    else if((sqrt(((xg-xb)*(xg-xb))+((yg-yb)*(yg-yb))))>(rg+rb))
        cout<<"Rakhe Allah, mare ke"<<endl;
    else if((sqrt(((xg-xb)*(xg-xb))+((yg-yb)*(yg-yb))))<(rg+rb))
        cout<<"More to gesi shei kobei"<<endl;

    return 0;
}

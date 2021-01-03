#include<bits/stdc++.h>
#define ll long long
#define sl(x) scanf("%lld",&x)
using namespace std;
int main()
{
    ll n,m;
    sl(n);
    sl(m);
    cout<<m%(1LL<<n)<<endl;
    return 0;
}

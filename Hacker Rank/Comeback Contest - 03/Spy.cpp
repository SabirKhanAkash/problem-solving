#include<bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{
    ll N,Q,c=0;
    vector<ll>th[100010];
    cin>>N;
    for(ll i=0;i<N;i++)
    {
        th.push_back(th.pushback(i));
    }
    vector<ll>t[100010];
    cin>>Q;
    for(ll j=0;j<Q;j++)
    {
        t.push_back(t.pushback(j));
        for(ll a=0;a<N;a++)
        {
            if(t[j]>th[a])
                c++;
        }
        cout<<c<<endl;
        c=0;
    }

    return 0;
}

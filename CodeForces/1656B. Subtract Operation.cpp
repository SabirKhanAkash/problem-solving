#include<bits/stdc++.h>
using namespace std;
//<--------- Coded by SabirKhanAkash 1603108 --------->

#define ll                     long long
#define p(a)                   cout<<a<<" "
#define pd(a)                  printf("%lf",a)
#define pf(a)                   printf("%f",a)
#define sd(a)                  scanf("%lf",&a)
#define sf(a)                  scanf("%f",&a)
#define si(a)                  scanf("%d",&a)
#define sl(a)                  scanf("%lld",&a)
#define loop(i,b)              for(i=0;i<b;i++)
#define loope(i,b)             for(i=0;i<=b;i++)
#define FOR(i,a,b)             for(i=a;i<b;i++)
#define FORE(i,a,b)            for(i=a;i<=b;i++)
#define rev(s)                 reverse(s.begin(),s.end())
#define inf                    9000000000000000
#define pie                    3.1415926536
#define pb(a)                  push_back(a)
#define pop(a)                pop_back(a)
#define in(a,b)                insert({a,b})
#define test                   printf(" <---I'm Here--> ")
#define tc(a)                  while(a--)
#define nl                     printf("\n")
#define sorted(a)              sort(a.begin(),a.end())
#define bsorted(a)             sort(a.begin(),a.end(),greater<ll>())
#define arrsort(a)             sort(a, a + sizeof(a) / sizeof(a[0]))
#define arrbsort(a)            sort(a, a + (sizeof(a) / sizeof(a[0])), greater<ll>())
#define i2s(arr,a)             std::sprintf(arr, "%d", a);

bool isDistinctNum(int n)
{
    stringstream ss;
    ss << n;
    string s=ss.str();
    set<int> uniDigits(s.begin(), s.end());
    if(s.size() == uniDigits.size())
        return true;
    else
        return false;
}



ll sub(ll arr[], ll m, ll n)
{
    ll t,indx,k;
    ll i,j,flag = 0;
    loop(i,n)
    {
        if(arr[i] == m)
            indx = i;
        break;
    }
    if(indx != -1)
    {
        FOR(j,indx,n-1)
            arr[i] = arr[i+1];
    }

    loop(i,n-1)
    {
        arr[i] = arr[i] - m;
    }

    return t;
}

int main()
{
    ll t,i,n;
    sl(t);
    tc(t)
    {
        ll target;
        sl(n);
        sl(target);
        ll arr[n];
        loop(i,n)
            sl(arr[i]);
        //cout<<arr[n-1]<<" "<<arr[n-2]<<endl;
        if(target == abs(arr[n-1]-arr[n-2]))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
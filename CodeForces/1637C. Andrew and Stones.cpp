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
#define test                   printf(" <---I'm Here--> ")
#define tc(a)                  while(a--)
#define nl                     printf("\n")
#define sorted(a)              sort(a.begin(),a.end())
#define bsorted(a)             sort(a.begin(),a.end(),greater<ll>())
#define arrsort(a)             sort(a, a + (sizeof(a) / sizeof(a[0])))
#define arrbsort(a)            sort(a, a + (sizeof(a) / sizeof(a[0])), greater<ll>())
#define i2s(arr,a)             std::sprintf(arr, "%d", a);

int sum = 0;

bool isAllEven(ll arr[],ll n)
{
    ll i,e=0;
    loop(i,n)
    {
        if((arr[i])%2== 0) { e++; sum += arr[i]; }

        if(e == n) return true;
        else return false;
    }
}

bool isAllOdd(ll arr[],ll n)
{
    ll i,o=0;
    loop(i,n)
    {
        if(arr[i] %2 != 0) o++;

        if(o == n) return true;
        else return false;
    }
}

int main()
{
    ll t;
    sl(t);

    tc(t)
    {
        ll i,n,arr[100000],midarr[100000],k=0,p;
        sl(n);
        loop(i,n)
        {
            sl(arr[i]);
            if(i!=0 || i!=(n-1))
            {
                midarr[k] = arr[i];
                k++;
            }

        }

        p = n-2;


        if(isAllOdd(midarr,p) == true)
            cout<<"-1"<<endl;
        else if(isAllEven(midarr,p) == true)
            cout<<(sum/2)<<endl;
    }

    return 0;
}

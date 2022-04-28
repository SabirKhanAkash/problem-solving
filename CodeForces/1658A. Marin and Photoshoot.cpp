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
#define sca(a)                 scanf("%s",a)
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
#define arrsort(a,n)             sort(a, a + n)
#define arrbsort(a)            sort(a, a + n, greater<ll>())
#define i2s(arr,a)             std::sprintf(arr, "%d", a);
#define tolow(a)               transform(a.begin(), a.end(), a.begin(), ::tolower)
#define toup(a)               transform(a.begin(), a.end(), a.begin(), ::toupper)


int main()
{
    int n,t;

    si(t);
    tc(t)
    {
        int i,ans=0;
        char x;
        vector<char>arr;
        vector<char>::iterator it;
        si(n);
        loop(i,n)
        {
            cin>>(x);
            arr.pb(x);
        }
        //test;
        arr.pb(1);
        arr.pb(1);
        for(it=arr.begin(); it!=(arr.end()-2); ++it)
        {
            //test;
            
            //cout<<"*it: "<<*it<<" *(it+1): "<<*(it+1)<<" *(it+2): "<<*(it+2);
            if(*it == '0' && *(it+1)=='0')
                ans = ans + 2;
            if(*it == '0' && *(it+1) == '1' && *(it+2) == '0')
                ans = ans + 1;
        }
        cout<<ans<<endl;
    }

    return 0;
}
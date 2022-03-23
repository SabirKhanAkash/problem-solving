#include<bits/stdc++.h>
#include<string>
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

bool isDistinct(int n)
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

int main()
{
    int i,x;
    si(x);
    if(x==1000)
        cout<<"1023"<<endl;
    else if(x==9000)
        cout<<"9012"<<endl;
    else
    {
        FORE(i,x,9012)
        {
            if(isDistinct(i)==true && x<i)
            {
                cout<<i<<endl;
                break;
            }

        }
    }


    return 0;
}

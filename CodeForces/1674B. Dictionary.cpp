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
#define eps                    1e-9
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
#define power(a,b)             (int)(pow(a,b)+eps)

int main()
{
    int t;
    cin>>t;
    tc(t)
    {
        string str;
        int i,j,k=0;
        vector<char>dict;
        vector<char>::iterator it;
        cin>>str;

        string x = "abcdefghijklmnopqrstuvwxyz";
        string y = "abcdefghijklmnopqrstuvwxyz";

        FORE(i,0,25)
        {
            FORE(j,0,25)
            {
                if(x[i]!=y[j])
                {
                    dict.pb(x[i]);
                    dict.pb(y[j]);
                    dict.pb('.');
                }
            }
        }
        float m=1;
        for(it = dict.begin(); it!=dict.end(); ++it)
        {
            if(str[0] == *it)
            {
                if(str[1] == *(it+1) && *(it+2)=='.')
                {
                    cout<<ceil(m/3)<<endl;
                    break;
                }
            }
            m++;
        }
    }

    return 0;
}
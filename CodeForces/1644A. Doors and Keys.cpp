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
#define test                   printf(" <---I'm Here--> ")
#define tc(a)                  while(a--)
#define nl                     printf("\n")
#define sorted(a)              sort(a.begin(),a.end())
#define bsorted(a)             sort(a.begin(),a.end(),greater<ll>())
#define arrsort(a)             sort(a, a + sizeof(a) / sizeof(a[0]))
#define arrbsort(a)            sort(a, a + (sizeof(a) / sizeof(a[0])), greater<ll>())
#define i2s(arr,a)             std::sprintf(arr, "%d", a);


int main()
{
    int t;
    si(t);

    tc(t)
    {
        int i,j,k,pass=0,l;
        string input;
        vector<char>keys;
        cin>>input;
        l=input.length();

        loop(i,l)
        {
            if(input[i]=='r' || input[i]=='g' || input[i]=='b')
                keys.pb(input[i]);
            else
            {
                if(input[i] == 'R')
                    loop(k,keys.size())
                    {
                        if(keys[k] == 'r')
                            pass+=1;
                    }
                if(input[i] == 'G')
                    loop(k,keys.size())
                    {
                        if(keys[k] == 'g')
                            pass+=1;
                    }
                if(input[i] == 'B')
                    loop(k,keys.size())
                    {
                        if(keys[k] == 'b')
                            pass+=1;
                    }
            }
        }

        if(pass == 3)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}

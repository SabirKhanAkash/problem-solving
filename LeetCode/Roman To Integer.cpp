#include<bits/stdc++.h>
#include <iostream>
#include <string>
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
#define revi(n,r)              r = r*10 + n%10
#define inf                    9000000000000000
#define pie                    3.1415926536
#define pb(a)                  push_back(a)
#define test                   printf(" <---I'm Here--> ")
#define tc(a)                  while(a--)
#define nl                     printf("\n")
#define sorted(a)              sort(a.begin(),a.end())
#define bsorted(a)             sort(a.begin(),a.end(),greater<ll>())
#define arrsort(a)             sort(a, a + sizeof(a) / sizeof(a[0]))
#define arrbsort(a)            sort(a, a + (sizeof(a) / sizeof(a[0])), greater<ll>())
#define i2s(arr,a)             std::sprintf(arr, "%d", a);


int romanToInt(string s) {
        int i,n=0;
        for(i=0;i<s.length();)
        {
            if(s[i]=='I')
            {
                if(s[i+1]=='V')
                {
                    n += 4;
                    i+=2;
                }

                else if(s[i+1]=='X')
                {
                    n += 9;
                    i+=2;
                }

                else
                {
                    n += 1;
                    i++;
                }
            }

            if(s[i]=='V')
            {
                n += 5;
                i++;
            }

            if(s[i]=='X')
            {
                if(s[i+1]=='L')
                {
                    n += 40;
                    i+=2;
                }

                else if(s[i+1]=='C')
                {
                    n += 90;
                    i += 2;
                }

                else
                {
                    n += 10;
                    i++;
                }

            }

            if(s[i]=='L')
            {
                n += 50;
                i++;
            }

            if(s[i]=='C')
            {
                if(s[i+1]=='D')
                {
                    n += 400;
                    i+=2;
                }

                else if(s[i+1]=='M')
                {
                    n += 900;
                    i+=2;
                }

                else
                {
                    n += 100;
                    i++;
                }
            }

            if(s[i]=='D')
            {
                n += 500;
                i++;
            }

            if(s[i]=='M')
            {
                n += 1000;
                i++;
            }

        }
        return n;
}

int main()
{
    string s;
    cin>>s;

    cout<<romanToInt(s);

    return 0;
}

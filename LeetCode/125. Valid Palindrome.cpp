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

class Solution {
public:
    bool isPalindrome(string s) {
        string p;
        for(int i=0; i<s.size(); ++i)
        {
            if(s[i]>=48 && s[i]<=57)
                p.push_back(s[i]);
            
            if(s[i]>=97 && s[i]<=122 || s[i]>=65 && s[i]<=90)
            {
                p.push_back(tolower(s[i]));
            }
        }
        string palin;
        for(int i=p.size()-1;i>=0;--i)
        {
            palin.push_back(p[i]);
        }
        if(palin==p)
            return true;
        
        return false;
    }
};
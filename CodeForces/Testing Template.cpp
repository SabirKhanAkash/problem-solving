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
#define loop(i,b)             for(i=0;i<b;i++)
#define loope(i,b)             for(i=0;i<=b;i++)
#define FOR(i,a,b)             for(i=a;i<b;i++)
#define FORE(i,a,b)            for(i=a;i<=b;i++)
#define rev(s)                 reverse(s.begin(),s.end())
#define inf                    9000000000000000
#define pie                    3.1415926536
#define pb(a)                  push_back(a)
#define test                   printf(" <---I'm Here--> \n")
#define tc(a)                  while(a--)
#define nl                     printf("\n")
#define sorted(a)              sort(a.begin(),a.end())
#define bsorted(a)             sort(a.begin(),a.end(),greater<ll>())
#define arrsort(a)              sort(a, a + sizeof(a) / sizeof(a[0]))
#define arrbsort(a)              sort(a, a + (sizeof(a) / sizeof(a[0])), greater<ll>())
#define i2s(arr,a)             std::sprintf(arr, "%d", a);


int main()
{
    ll a,t,i,j,k,l,p,in,arr[5],temp[5];
    double b;
    float c;
    string e;
    int f;

    p = pie;
    in = inf;

    sl(t);

    tc(t)
    {
        sl(a);
        sd(b);
        sf(c);
        si(f);
        cin>>e;

        nl;
        p(a);
        nl;
        pd(b);
        nl;
        pf(c);
        nl;
        p(e);
        nl;
        p(f);
        nl;
        nl;

        loop(i,5)
        {
            loope(j,2)
            {
                test;
            }
        }
        nl;

        FOR(k,5,8)
        {
            cout<<"Printing For Loop"<<endl;
        }
        nl;
        nl;

        FORE(l,5,8)
        {
            cout<<"This Time Printing with Equal"<<endl;
        }

        p(p);
        nl;
        p(in);
        nl;
        nl;

        cout<<"Printing Reverse string: ";
        rev(e);
        p(e);
        nl;

        int k=0;
        loop(i,5)
        {
            sl(arr[i]);
            temp[k++] = arr[i];
        }

        string temps = e;


        sorted(e);

        cout<<"Printing Alphabetically Sorted String: ";
        p(e);

        nl;

        arrsort(arr);

        cout<<"Ascending Sorted Array: ";
        loop(i,5)
        {
            p(arr[i]);
        }

        nl;
        nl;

        bsorted(temps);

        cout<<"Printing Reversed Alphabetically Sorted String: ";
        p(temps);

        nl;

        arrbsort(temp);

        cout<<"Descending Sorted Array: ";
        loop(i,5)
        {
            p(temp[i]);
        }

        nl;
        nl;

        cout<<"<-------------- Testing Finished -------------->"<<endl;

    }






    return 0;
}

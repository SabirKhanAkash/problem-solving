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

void printOutput(int n, int k)
{
    int nn=0,i,j;
    FORE(i,1,n)
    {
        FORE(j,1,k)
        {
            cout<<(i+(n*nn))<<" ";
            nn++;
        }
        nn = 0;
        cout<<endl;
    }
}

int main()
{
    int t,n,k;
    sl(t);

    tc(t)
    {
        int i,j;
        si(n);
        si(k);

        if(k==1)
        {
            cout<<"YES"<<endl;
            printOutput(n,k);
        }
        else
        {
            if(n%2 !=0 )
                cout<<"NO"<<endl;
            else
            {
                cout<<"YES"<<endl;
                printOutput(n,k);
            }

        }

    }

    return 0;
}

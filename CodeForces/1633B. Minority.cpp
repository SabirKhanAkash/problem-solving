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
    ll t,i,c_z=0,c_nz=0;
    string n;

    cin>>t;
    tc(t)
    {
        ll c_z=0,c_nz=0,c_z2=0,c_nz2=0;
        int minor=0;
        cin>>n;
        loop(i,n.length())
        {
            if(n=="1" && n.length()==1)
                break;

            if(n[i]=='1')
                c_nz++;
            else if(n[i]=='0')
                c_z++;

        }

        if(c_z>c_nz)
            minor = c_nz;
        else if(c_z<c_nz)
            minor = c_z;

        else
        {
            loop(i,(n.length()-1))
            {
                if(n[i]=='0')
                    c_z2++;
                else if(n[i]=='1')
                    c_nz2++;
            }
        if(c_z2>c_nz2)
            minor = c_nz2;
        else if(c_z2<c_nz2)
            minor = c_z2;
        }

        cout<<minor<<endl;

    }

    return 0;
}

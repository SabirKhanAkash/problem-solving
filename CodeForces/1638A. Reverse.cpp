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
#define arrsort(a)             sort(a, a + sizeof(a) / sizeof(a[0]))
#define arrbsort(a)            sort(a, a + (sizeof(a) / sizeof(a[0])), greater<ll>())
#define i2s(arr,a)             std::sprintf(arr, "%d", a);

int main()
{
    ll t;
    sl(t);

    tc(t)
    {
        int n,i,j,l,p,pin=0,pin2=0,flag=0,m=0;
        si(n);

        int arr[500],checker[500],res[500],c=1;

        FOR(i,1,500)
            checker[i] = i;

        FORE(i,1,n)
            si(arr[i]);


        FORE(i,1,n)
        {
            if(arr[i] == checker[i] && flag == 0)
            {
                res[c] = arr[i];
                cout<<res[c]<<" ";

                if(i<n) c++;
            }
            else if(arr[i] != checker[i])
            {
                flag = 1;
                pin = i;
                FORE(j,1,n)
                {
                    if(arr[j] == pin)
                        pin2 = j;
                }
                break;
            }
            //cout<<"pin1: "<<pin<<" pin2: "<<pin2<<endl;
        flag = 0;
        }

        if(flag == 1)
        {
           for(int k=pin2; k>=pin; k--)
            {
                res[c] = arr[k];
                cout<<res[c]<<" ";
                if(k>pin) c++;
            }
            if(pin2 < n)
            {
                FORE(l,pin2+1,n)
                {
                    res[c] = arr[l];
                    cout<<res[c]<<" ";
                    if(l<n) c++;
                }

            }

        }
        nl;
    }

    return 0;
}



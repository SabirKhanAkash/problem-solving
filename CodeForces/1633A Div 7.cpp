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
    int arr[999],i,j,t,n,diff[999];

    cin>>t;
    tc(t)
    {
        int x,y,a,b,ptsx=0,ptsy=0;
        cin>>n;
        FOR(i,1,143)
            arr[i] = i*7;

        if(n%7==0)
            cout<<n<<endl;
        else if(n==10 || n==11 || n==12 || n==13)
            cout<<"14"<<endl;
        else
        {
            x = (int) n/7;
            y = x+1;

            char num_charx[999];
            char num_charn[999];
            char num_chary[999];

            i2s(num_charx,arr[x]);
            i2s(num_charn,n);
            i2s(num_chary,arr[y]);

            loop(i,3)
            {
                if(num_charn[i]==num_charx[i])
                    ptsx += 1;

                if(num_charn[i]==num_chary[i])
                    ptsy += 1;
            }
            if(ptsx>=ptsy)
                cout<<arr[x]<<endl;
            else
                cout<<arr[y]<<endl;
        }
    }

    return 0;
}

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

/*
 * Complete the 'sockMerchant' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER_ARRAY ar
 */

bool isPair(int a, int b)
{
    if(a==b)
        return true;
    else
        return false;
}

int sockMerchant(int n, int ar[]) {
    int count,ans=0,i,j;
    loop(i,n)
    {
        count = 1;
        FOR(j,i+1,n)
        {
            if(ar[i] == ar[j])
                count++;
        }
        ans += (count/2);
        cout<<" ans: "<<ans<<endl;

    }
    return ans;
}

int main()
{
    int ar[1000],n,m;

    cin>>n;
    loop(m,n)
    {
        cin>>ar[m];
    }
    sort(ar, ar + (sizeof(ar) / sizeof(ar[0])));
    loop(m,n)
        cout<<" "<<ar[m];
    nl;
    int result;

    int count,ans=0,i,j;
    loop(i,n)
    {
        count = 1;
        FOR(j,i+1,n)
        {
            if(ar[i] == ar[j])
                count++;
        }
        ans += (count/2);
        cout<<" ans: "<<ans<<endl;

    }

    //cout << result << "\n";

    return 0;
}


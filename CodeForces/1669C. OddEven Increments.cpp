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

bool isAllOdd(int ar[], int j)
{
    int i,count=0;
    loop(i,j)
    {
        if(ar[i]%2 != 0)
            count++;
    }
    if(count == j)
        return true;
    else
        return false;
}

bool isAllEven(int ar[], int k)
{
    int i,count=0;
    loop(i,k)
    {
        if(ar[i]%2 == 0)
            count++;
    }
    if(count == k)
        return true;
    else
        return false;
}

int main()
{
    int t;
    cin>>t;
    tc(t)
    {
        int n,i,j=0,k=0;
        cin>>n;
        int arr[n],o[n],e[n];
        loop(i,n)
        {
            cin>>arr[i];
            if(i % 2 != 0)
                o[j++] = arr[i];
            else
                e[k++] = arr[i];
        }
        // cout<<j<<" "<<k<<endl;
        if((isAllOdd(o,j) == true || isAllEven(o,j)) == true && (isAllEven(e,k) == true || isAllOdd(e,k) == true))
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
            
    }

    return 0;
}
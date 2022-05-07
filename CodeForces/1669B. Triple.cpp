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

//print the frequency of each characters of a string
 
// void printFrequency(string str)
// {
//     unordered_map<char, int> M;
//     for (int i = 0; str[i]; i++)
//     {
//         if (M.find(str[i]) == M.end())
//             M.insert(make_pair(str[i], 1));

//         else
//             M[str[i]]++;
//     }

//     for (auto& it : M) {
//         cout << it.first << ' ' << it.second << '\n';
//     }
// }


int main()
{
    ll t;
    cin>>t;
    tc(t)
    {
        ll n,i,res=-1;
        cin>>n;
        ll arr[n];
        loop(i,n)
            cin>>arr[i];

        arrsort(arr,n);

        loop(i,n-2)
        {
            if(arr[i] == arr[i+1] && arr[i+1] == arr[i+2])
            {
                res = arr[i];
                break;
            }
                
        }
        cout<<res<<endl;

    }

    return 0;
}
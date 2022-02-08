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

int main()
{
    int t,n,k,arr[500][500],temp[500][500];


    sl(t);

    tc(t)
    {
        int p = 1,flag=0,c,d,i,j;
        si(n);
        si(k);

        loop(i,n)
        {
            loop(j,k)
            {
                arr[i][j] = p;
                temp[i][j] = p;
                p++;
            }
        }

        if(k==1)
        {
            if(n==1)
            {
                cout<<"YES"<<endl;
                cout<<"1"<<endl;
            }
            else {
                cout<<"YES"<<endl;
                loop(i,n)
                {
                    loop(j,k)
                    {
                        cout<<(arr[i][j]);
                    }
                    nl;
                }
            }
        }

        else if(n==1 && k>1)
            cout<<"NO"<<endl;

        else if(k>=1)
        {
            loop(i,n)
            {
                int sum = 0;
                loop(j,k)
                {
                    sum += arr[i][j];
                }
                //cout<<"sum = "<<sum<<endl;
                if(sum%k != 0)
                    {
                        flag = 1;
                        int x = k - (sum%k);
                        int f = arr[i][j]+x;
                        //cout<<"f : "<<f<<" arr[i][k]: "<<arr[i][k-1]<<endl;
                        loop(c,n)
                        {
                            loop(d,k)
                            {
                                if(temp[c][d] == f)
                                {
                                    int tempo;
                                    tempo = arr[c][d];
                                    arr[c][d] = arr[i][j];
                                    arr[i][k-1] = tempo;
                                    //cout<<"arr[c][d]: "<<arr[c][d]<<"   "<<"arr[i][k]: "<<arr[i][k-1]<<endl;
                                }
                            }
                        }
                    }
                    sum = 0;
            }

            if(flag==0)
                cout<<"NO"<<endl;
            else
            {
                cout<<"YES"<<endl;
                loop(i,n)
                {
                    loop(j,k)
                    {
                        cout<<(arr[i][j])<<" ";
                    }
                    nl;
                }
            }
        }
    }


    return 0;
}

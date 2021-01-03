#include<bits/stdc++.h>
#define ld long double
#define ll long long
#define sll(x) scanf("%lld",&x)
#define si(x) scanf("%d",&x)
#define sd(x) scanf("%lf",&x)
#define l(n,t,m) for(int m=n;m<(t+n);m++)
using namespace std;
int main()
{
    char s1[10010],s2[10010],s3[10010],s4[10010];
    int t,l1,l2,c=0;
    si(t);
    l(0,t)
    {
        si(l1);
        si(l2);
        cin>>s1>>s2;
        s3=strlwr(s1);
        s4=strlwr(s2);
        if(l1>l2)
            cout<<"No\n"<<endl;
        else
        {
            l(0,l1,i)
            {
                l(0,l2,j)
                {
                    if(s3[i]==s4[j])
                        c++;
                }
            }
        }

    }

    return 0;
}

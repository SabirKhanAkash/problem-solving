#include<bits/stdc++.h>
#define ll long long
#define sll(x) scanf("%lld",&x)
#define si(x) scanf("%d",&x)
#define sd(x) scanf("%lf",&x)
#define l(n,t) for(int i=n;i<t;i++)
using namespace std;
int main()
{
    int S;
    double cg,keltu,avg,sum=0.00,diff;
    si(S);
    l(0,S){
        sd(cg);
        sum+=cg;
    }
    sd(keltu);
    avg = sum/(double)S;
    diff = abs(keltu - avg);
    cout<<diff<<endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double pi=2*acos(0.0),r1,r2,x,y,j,h,p;
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        cin>>r1>>r2>>h>>p;
        x = h/(r1/r2-1);
        y = ((x+p)/x)*r2;
        j = (pi*(y*y*(p+x) - r2*r2*x))/3;
        printf("Case %d: %.9lf\n",i,j);
    }

    return 0;
}

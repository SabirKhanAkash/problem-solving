#include<iostream>
#include<stdio.h>
#define ll long long
#define si(x) scanf("%d",&x)

using namespace std;
int main()
{
    int n,m,a,b;
    double cost,minCost;
    si(n);
    si(m);
    for(int i=0;i<n;i++)
    {
        si(a);
        si(b);
        cost=(double)a/(double)b;
        minCost = cost;
        if(cost<minCost && i>0)
            minCost=cost;
    }
    printf("%0.8lf\n",minCost);
    return 0;
}

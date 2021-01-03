#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll l1,l2,r1,r2,k;
    scanf("%lld%lld%lld%lld%lld",&l1,&r1,&l2,&r2,&k);
    if((l2<l1 && r2<l1) || l2>r1 )
        printf("0\n");
    else if(l2<=l1 && r2<=r1 && r2>=l1)
    {
        if(k >=l1 && k<=r2)
            printf("%lld\n",(r2 - l1));
        else
            printf("%lld\n",(r2 - l1)+1);
    }
    else if(l2>=l1 && l2<=r1 && r2>=r1)
    {
        if(k >=l2 && k<=r1)
            printf("%lld\n",(r1 - l2));
        else
            printf("%lld\n",(r1 - l2)+1);
    }
    else if(l2<=l1 && r2>=r1)
    {
        if(k >=l1 && k<=r1)
            printf("%lld\n",(r1 - l1));
        else
            printf("%lld\n",(r1 - l1)+1);
    }
    else if(l2>l1 && r2<r1)
    {
        if(k >=l2 && k<=r2)
            printf("%lld\n",(r2 - l2));
        else
            printf("%lld\n",(r2 - l2)+1);
    }

    return 0;
}

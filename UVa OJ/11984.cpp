#include<bits/stdc++.h>
int main()
{
    int T,i;
    double x,C,d;
    scanf("%d",&T);
    for (i = 1 ; i<=T ; i+=1) {
        scanf("%lf%lf",&C,&d);
        x = C+(((5*d)-32)/9);
        printf("Case %d: %0.2lf\n",i,x);
    }

    return 0;
}

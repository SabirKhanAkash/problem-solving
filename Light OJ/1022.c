#include<stdio.h>
int main()
{
    int T,i;
    double r;
    scanf("%d",&T);
    for (i=1 ; i<=T ; i++)
    {
        scanf("%lf",&r);
        printf("Case %d: %0.2lf\n",i,(4*r*r)-((2 * acos (0.0))*r*r));
    }
    return 0;
}

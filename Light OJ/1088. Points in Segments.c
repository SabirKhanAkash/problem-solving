#include<stdio.h>
int main()
{
    int i,j,k,l,T,n,q,count=0,points[100000],a,b;
    scanf("%d",&T);
    for (i = 1 ; i<=T ; i+=1) {
        scanf("%d%d",&n,&q);
        for (j = 0 ; j<n ; j+=1) {
            scanf("%d",&points[j]);
        }
        for (k = 0 ; k<q ; k+=1) {
            scanf("%d%d",&a,&b);
            if (k==0)
                printf("Case %d:\n",i);
            for (l = 0 ; l<n ; l+=1) {
                if (points[l]>=a && points[l]<=b) {
                count++;
                }
            }
            printf("%d\n",count);
            count = 0;
        }
        count = 0;
    }
    return 0;
}

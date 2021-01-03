#include<stdio.h>
int main()
{
    int n,d[110],a,b,i,sum=0;
    scanf("%d",&n);
    for (i=0 ; i<n-1 ; i++) {
        scanf("%d",&d[i]);
    }
    scanf("%d%d",&a,&b);
    for (i=a ; i<=b-1 ; i++) {
        sum+=d[i-1];
    }
    printf("%d\n",sum);
    return 0;
}

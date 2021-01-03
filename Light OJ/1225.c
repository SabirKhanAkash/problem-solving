#include<stdio.h>
int main()
{
    int T,n,i,reverse=0,remainder;
    scanf("%d",&T);
    for (i = 1 ; i<=T ; i++) {
        scanf("%d",&n);
        while(n!=0) {
            remainder=n%10;
            reverse=reverse*10+remainder;
            n=n/10;
    }
    if(n==reverse)
        printf("Case %d: Yes\n",i);
    else
        printf("Case %d: No\n",i);
    }

    return 0;
}

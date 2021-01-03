#include<stdio.h>
int main()
{
    int i,n,a,b,count=0;
    scanf("%d%d%d",&n,&a,&b);
    int x = n - b;
    for (i = 1 ; i<=n ; i++) {
        if (i>a && i>=x)
            count++;
    }
    printf("%d\n",count);
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int c, i,t,n,j,rem;
    scanf("%d",&t);
    for (i = 1 ; i <= t ; i+=1) {
        scanf("%d",&n);
        for(j = 1 ; n != 1; j+=1) {
            c = 0;
            rem = n%2;
            if (rem != 0)
                c+=1;
            n = n/2;
            if (n == 1)
                c+=1;
            printf("%d\n",c);
    }
    if (c%2 == 0) {
        printf("Case %d: even\n",i);
        c == 0;
    }
    else {
        printf("Case %d: odd\n",i);
        c == 0;
        }
    }
    return 0;
}

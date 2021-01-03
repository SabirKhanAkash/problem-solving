#include<stdio.h>
int main()
{
    int i,count=0,n,a,b,c;
    scanf("%d",&n);
    for (i = 0 ; i<n ; i+=1) {
        scanf("%d%d%d",&a,&b,&c);
        if (a == 1 && b == 1 && c == 1)
            count += 1;
        else if (a == 1 && b == 1 )
            count += 1;
        else if (b == 1 && c == 1 )
            count += 1;
        else if (a == 1 && c == 1)
            count += 1;
        }
    printf("%d\n",count);
    return 0;
}

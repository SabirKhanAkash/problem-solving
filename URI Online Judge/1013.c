#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int a,b,c,m,n;
    scanf("%d%d%d",&a,&b,&c);
    m=((a+b)+abs(a-b))/2;
    n=((c+m)+abs(c-m))/2;
    printf("%d eh o maior\n",n);
    return 0;
}

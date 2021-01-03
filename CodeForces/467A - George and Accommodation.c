#include<stdio.h>
int main()
{
    int n,p,q,i,seat=0;
    scanf("%d",&n);
    for (i=0 ; i<n ; i+=1) {
    scanf("%d%d",&p,&q);
    if ((q-p) >= 2)
        seat+=1;
    }
    printf("%d\n",seat);
    return 0;
}

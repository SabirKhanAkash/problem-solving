#include<stdio.h>
int main()
{
    long signed int v,t,i;
    while (scanf("%ld%ld",&v,&t)!=EOF)
    {
        printf("%ld\n",v*2*t);
    }
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    long long int x,y;
    while (scanf("%lld%lld",&x,&y)!=EOF) {
        printf("%lld\n",abs(x-y));
    }
    return 0;
}

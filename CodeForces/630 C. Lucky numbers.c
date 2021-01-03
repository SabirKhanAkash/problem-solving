#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    printf("%lld\n", (long long int) (pow(2,n+1)-2));
    return 0;
}

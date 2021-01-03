#include<stdio.h>
int main()
{
    int i;
    long long int N;
    scanf("%lld",&N);
    for (i=0 ; i<=(9998/N) ; i++)
    {
        printf("%lld\n",(N*i)+2);
    }
    return 0;
}

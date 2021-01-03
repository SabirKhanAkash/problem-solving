#include<stdio.h>
int main()
{
    long long int i,N,X,a,b,c,d,e;
    scanf("%lld",&N);
    for (i=1 ; i<=N ; i++) {
        scanf("%lld",&X);
        if(X%2==0 && X>0) printf("EVEN POSITIVE\n");
        else if (X%2==0 && X<0) printf("EVEN NEGATIVE\n");
        else if (X%2!=0 && X>0) printf("ODD POSITIVE\n");
        else if (X%2!=0 && X<0) printf("ODD NEGATIVE\n");
        else if(X==0) printf("NULL\n");
    }
    return 0;
}

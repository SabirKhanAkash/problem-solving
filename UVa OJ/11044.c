#include<stdio.h>
int main()
{
    long long int m1,m,n1,n,t,i;
    scanf("%lld",&t);
    for (i = 1 ; i <= t ; i++) {
        scanf("%lld%lld",&n1,&m1);
        n = n1- 2;
        m = m1 - 2;

        if ((n%3)!=0 && (m%3)!=0) {
            printf("%lld\n",((n/3)+1)*((m/3)+1));
        }
        else if ((n%3)==0 && (m%3)!=0) {
            printf("%lld\n",(n/3)*((m/3)+1));
        }
        else if ((n%3)!=0 && (m%3)==0) {
            printf("%lld\n",((n/3)+1)*(m/3));
        }
        else {
            printf("%lld\n",(n/3)*(m/3));
        }

    }
    return 0;
}

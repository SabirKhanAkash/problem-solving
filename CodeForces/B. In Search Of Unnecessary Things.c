#include<stdio.h>
int main()
{
    long long int i,n,j,marks[101],T,t,k,l;
    scanf("%lld",&T);
    for (i = 1 ; i <=T ; i++) {
        scanf("%lld",&n);
        for (j = 1 ; j <= n ; j++) {
            scanf("%lld",&marks[j]);
        }
        for(j=0;j<n;j++) {
            for(k=j+1;k<n;k++) {
                if(marks[j]>marks[k])
                    {
                        t=marks[j];
                        marks[j]=marks[k];
                        marks[k]=t;
                    }
                }
                for (k = 1 ; k<=n ; k++) {
                    if (marks[k])
                }
            }


    return 0;
}

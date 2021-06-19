#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,t;
    scanf("%d",&t);
    for (i = 0; i < t; i++)
    {
        int j,n;
        long arr[10010];
        long m;
        scanf("%d",&n);
        long sum = 0;
        for (j = 0; j < n; j++)
        {
            scanf("%ld",&arr[j]);
            sum = sum+arr[j];

        }
        if(sum==n)
            m = 0;
        else if(sum>n)
            m = sum - n;
        else
            m = 1;

        printf("%ld\n",m);
        
    }
    return 0;
    
}
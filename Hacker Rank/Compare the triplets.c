#include<stdio.h>
int main()
{
    int A[100],B[100],i,j,t=0,c=0;
    for (i=0 ; i<=2 ; i++)
        scanf("%d",&A[i]);
    for (i=0 ; i<=2 ; i++)
    {
        scanf("%d",&B[i]);
        if(A[i]>B[i])
        t++;
        else if(A[i]<B[i])
        c++;
    }
        printf("%d %d",t,c);
    return 0;
}

#include<stdio.h>
int main()
{
    int N,i,j,s=0,s1=0,A[100][100];
    scanf("%d",&N);
    for (i=0 ; i<N ; i++)
    {
        for (j=0 ; j<N ; j++)
        {
            scanf("%d",&A[i][j]);
            if(i==j)
            {
                s=s+A[i][j];
            }
            if(j==N-i-1)
            {
                s1=s1+A[i][j];
            }
        }
    }
        printf("%d",abs(s-s1));
        return 0;
}

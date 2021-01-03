#include<stdio.h>
int main()
{
    int c=0,p=0,t=0,N,i,A[100];
    scanf("%d",&N);
    for (i=0 ; i<N ; i++)
    {
        scanf("%d",&A[i]);
        if(A[i]>0)
            c++;
        else if(A[i]<0)
            p++;
        else t++;
    }
    printf("%0.6f\n",(float) c/N);
    printf("%0.6f\n",(float) p/N);
    printf("%0.6f\n",(float) t/N);
    return 0;
}

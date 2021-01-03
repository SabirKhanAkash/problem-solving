#include<stdio.h>
int main()
{
    int M,N,A;
    scanf("%d%d",&M,&N);
        if (M%2 == 0)
            A = (M/2)*N;
        else
            A = ((M/2)*N)+(N/2);
        printf("%d\n",A);
        return 0;
}

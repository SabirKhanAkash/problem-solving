#include<stdio.h>
int main()
{
    int N,i,k,j;
    scanf("%d",&N);
    for(i=2;i<=N+1;i++)
        {
         for(j=1;j<=(N-i)+1;j++)
         {
             k=0;
             printf(" ");
         }

         while(k!=(((2*i)-1)/2))
            {
             printf("#");
             k++;
            }
         printf("\n");
     }
    return 0;
}

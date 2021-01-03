#include<stdio.h>
int main()
{
    int N,X,i,c=0,p=0;
    scanf("%d",&N);
    for (i=1 ; i<=N ; i++)
    {
        scanf("%d",&X);
        if(i>=10 && i<=20) c++;
        else if(i<10 || i>20) p++;
    }
    printf("%d in\n",c);
    printf("%d out\n",p);
    return 0;
}

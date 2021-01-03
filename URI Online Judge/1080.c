#include<stdio.h>
int main()
{
    int N[1000],i,count=0;
    for (i=0 ; i<1000 ; i++)
    {
        scanf("%d",N[i]);
        if (N[i+1]>N[i])
            count++;
        //else if (N[i+1]<N[i])

    //printf("%d",)
    printf("%d",count);
    return 0;
}

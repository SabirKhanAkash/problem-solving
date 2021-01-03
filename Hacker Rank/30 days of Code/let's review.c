#include<stdio.h>
int main()
{
    char S[100];
    int i,j,k,T;
    scanf("%d",&T);
    for (i=0 ; i<T ; i++)
    {
        scanf("%s",S);
    }
        for (j=0 ;  ; j+2)
            printf("%c",&S[j]);
        for (k=1 ;  ; k+2)
            printf("%c",&S[k]);

    return 0;
}

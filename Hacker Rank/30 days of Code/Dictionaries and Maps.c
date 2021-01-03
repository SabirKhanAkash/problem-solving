#include<stdio.h>
int main()
{
    int n,queries,i,ii,phoneNumber;
    char name[100],j[100];

    scanf("%d",&n);
    for (i=0 ; i<n ; i++)
    {
        for (ii=0 ; name!='\r' ; ii++)
        scanf("%c",name[i]);
    }
    for (queries=1 ; queries<=n ; queries++)
    {
        scanf("%s",j);
        if (strcmp(i,j)==0)
            printf("%s=%d\n",j,phoneNumber);
        else
            printf("Not found\n");
    }
    return 0;
}

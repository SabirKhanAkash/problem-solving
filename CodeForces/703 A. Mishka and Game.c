#include<stdio.h>
int main()
{
    int r,m,c,countM=0,countC=0,i;
    scanf("%d",&r);
    for (i=0 ; i<r ; i+=1) {
        scanf("%d%d",&m,&c);
        if (m > c)
            countM+=1;
        else if (m < c)
            countC+=1;
    }
    if (countM > countC)
        printf("Mishka\n");
    else if (countM < countC)
        printf("Chris\n");
    else if (countC == countM)
        printf("Friendship is magic!^^\n");
    return 0;
}

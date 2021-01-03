#include<stdio.h>
int main()
{
    int count1=0,arr[5],i;

    for (i=0 ; i<5 ; i++)
    {
        scanf("%d",&arr[i]);
        if (arr[i]%2==0)
            count1++;

    }
    printf("%d valores pares\n",count1);

    return 0;
}

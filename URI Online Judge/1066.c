#include<stdio.h>
int main()
{
    int count1=0,count2=0,count3=0,count4=0,arr[5],i;

    for (i=0 ; i<5 ; i++)
    {
        scanf("%d",&arr[i]);
        if (arr[i]>0)
            count3++;
        if (arr[i]<0)
            count4++;
        if (arr[i]%2==0)
            count1++;
        if(arr[i]%2!=0)
            count2++;

    }
    printf("%d valor(es) par(es)\n",count1);
    printf("%d valor(es) impar(es)\n",count2);
    printf("%d valor(es) positivo(s)\n",count3);
    printf("%d valor(es) negativo(s)\n",count4);


    return 0;
}

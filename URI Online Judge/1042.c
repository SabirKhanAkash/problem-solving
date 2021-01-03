#include<stdio.h>
int main()
{
    int i,j,n,t,item[100];
    for (i=0 ; i<3 ; i++)
    scanf("%d",&item[i]);
    for (i=0 ; i<3 ; i++)
        for (j=3-1 ; j>=i ; j--)
            {
                if(item[j-1]>item[j])
                {
                    t = item[j-1];
                    item[j-1] = item[j];
                    item[j] = t;
                }
            }
            for (t=0 ; t<3 ; t++)
                printf("%d\n",item[t]);
                printf("\n");
                for (i=0 ; i<3 ; i++)
                {
                    printf("%d\n",item[i]);
                }
            return 0;
}

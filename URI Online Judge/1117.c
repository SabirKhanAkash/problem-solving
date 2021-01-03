#include<stdio.h>
int main()
{
    int i;
    float n[100],t1,t2;
    for (i=0 ; ; i++)
    {
        scanf("%f",&n[i]);
        if (n[i]>=0 && n[i]<=10)
        {
            t1=n[i];
            continue;
            scanf("%f",&t2);
            if (t2>10 || t2<0)
                goto finish2;
            else
                goto finish1;
        }
        else
        finish2:   printf("nota invalida\n");

    }
    finish1: printf("media = %0.2f\n",(t1+t2)/2);
    return 0;
}

#include<stdio.h>
int main()
{
    float n,total=0,avg=0;
    int i,count=0;
    for (i=1 ; i<=6 ; i++)
    {
    scanf("%f",&n);
        if (n>0) {
            count++;
            total+= n;
        }
    }
    avg = (total/count);
    printf("%d valores positivos\n",count);
    printf("%0.1f\n",avg);
    return 0;
}

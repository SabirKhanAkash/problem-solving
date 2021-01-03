#include<stdio.h>
int main()
{
    int N,i;
    float A=0,B=0,C=0,MEDIA;
    scanf("%d",&N);
    for (i=1 ; i<=N ; i++)
    {
        scanf("%f%f%f",&A,&B,&C);
        A=A*2;
        B=B*3;
        C=C*5;
        MEDIA=(A+B+C)/10;
        printf("%0.1f\n",MEDIA);
    }

    return 0;
}



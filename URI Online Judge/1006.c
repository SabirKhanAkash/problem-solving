#include<stdio.h>
int main()
{
    float A=0,B=0,C=0,MEDIA;
    scanf("%f%f%f",&A,&B,&C);
    A=A*2;
    B=B*3;
    C=C*5;
    MEDIA=(A+B+C)/10;
    printf("MEDIA = %0.1f\n",MEDIA);
    return 0;
}


#include<stdio.h>
int main()
{
    double A=0,B=0,MEDIA;
    scanf("%lf%lf",&A,&B);
    A=A*3.5;
    B=B*7.5;
    MEDIA=(A+B)/11;
    printf("MEDIA = %0.5lf\n",MEDIA);
    return 0;
}

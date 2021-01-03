#include<stdio.h>
int main()
{
    float A,B,C,Area,Perimetro;
    scanf("%f%f%f",&A,&B,&C);
    if((A+B) > C) {
    printf("Perimetro = %0.1f\n",A+B+C); }
    else if(1) printf("Area = %0.1f\n", (0.5*(A+B)*C));
    return 0;
}

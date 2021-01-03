#include<stdio.h>
#include<math.h>
int main()
{
    double A,B,C,R1,R2;
    scanf("%lf%lf%lf",&A,&B,&C);
    if(A!=0 && ((B*B)-(4*A*C))>=0 ) {
        printf("R1 = %0.5lf\n",(sqrt((B*B)-(4*A*C))-B)/(2*A));
        printf("R2 = %0.5lf\n",(-sqrt((B*B)-(4*A*C))-B)/(2*A));
    }

        else if(A==0 || ((B*B)-(4*A*C))<0) printf("Impossivel calcular\n");
            return 0;
}




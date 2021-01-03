#include<stdio.h>
int main()
{
    float N;
    scanf("%f",&N);
    printf("%f nota(s) de R$ 100,00\n",N/100);
    printf("%f nota(s) de R$ 50,00\n",(N%100)/50);
    printf("%f nota(s) de R$ 20,00\n",((N%100)%50)/20);
    printf("%f nota(s) de R$ 10,00\n",(((N%100)%50)%20)/10);
    printf("%f nota(s) de R$ 5,00\n",((((N%100)%50)%20)%10)/5);
    printf("%f nota(s) de R$ 2,00\n",(((((N%100)%50)%20)%10)%5)/2);
    printf("%f nota(s) de R$ 1,00\n",((((((N%100)%50)%20)%10)%5)%2)/1);
    return 0;
}

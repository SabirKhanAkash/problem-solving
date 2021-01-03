#include<stdio.h>
int main()
{
    int X;
    scanf("%d",&X);
    if(X==61) printf("Brasilia\n");
    else if(X==71) printf("Salvador\n");
    else if(X==11) printf("Sao Paulo\n");
    else if(X==21) printf("Rio de Janeiro\n");
    else if(X==32) printf("Juiz de Fora\n");
    else if(X==19) printf("Campinas\n");
    else if(X==27) printf("Vitoria\n");
    else if(X==31) printf("Belo Horizonte\n");
    else printf("DDD nao cadastrado\n");
    return 0;
}

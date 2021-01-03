#include<stdio.h>
int main()
{
    int N,i;
    while (N!=2002)
    {
        scanf("%d",&N);
        if (N==2002)
            break;
        printf("Senha Invalida\n");
    }
    printf("Acesso Permitido\n");

    return 0;
}

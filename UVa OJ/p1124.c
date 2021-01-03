#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1000];
    while (1)
    {
    scanf("%s ",ch);
    printf("%s",ch);
    ch[0]='\0';
    printf("\n");
    }

    return 0;
}

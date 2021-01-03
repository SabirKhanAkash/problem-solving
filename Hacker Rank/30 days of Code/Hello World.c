#include<stdio.h>
int main()
{
    int i;
    char str[100];
        gets(str);

    printf("Hello, World.\n");
    for (i=0 ; str[i] ; i++)
    {
        printf("%c",str[i]);
    }

    return 0;
}

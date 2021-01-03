#include<stdio.h>
#include<string.h>
int main()
{
    int x;
    char s[25];
    scanf("%s",s);
    x = strlen(s);
    printf("%d\n",(26*(x+1))-x);
    return 0;
}

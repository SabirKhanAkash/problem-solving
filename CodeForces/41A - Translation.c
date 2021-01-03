#include<stdio.h>
#include<string.h>
int main()
{
    int i,c=0;
    char s[110],p[110];
    scanf("%s",s);
    scanf("%s",p);
    for (i=0 ; i<strlen(s) ; i+=1)
        if (s[i] == p[(strlen(p)-1)-i])
            c+=1;
    if (c == (strlen(s)))
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}


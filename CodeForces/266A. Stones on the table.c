#include<stdio.h>
#include<string.h>
int main()
{
    int n,x,i;
    char s[100];
    scanf("%d",&n);
    x = n;
    scanf("%s",s);
    for (i = 0 ; i < strlen(s) ; i+=1) {
        if(s[i] == s[i+1])
            n-=1;
    }
    printf("%d\n",x-n);
    return 0;
}

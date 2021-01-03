#include<stdio.h>
#include<string.h>
int main()
{
    int str[120];
    int i,T,x;
    scanf("%d",&T);
    for (i = 0 ; i <=T ; i+=1) {
        gets(str);
        x = strlen(str);
        if (x > 10) {
            printf("%c",str[0]);
            printf("%d",x-2);
            printf("%c",str[x-1]);
            printf("\n");
        }
        else
            printf("%s",str);
            printf("\n");
    }

    return 0;
}

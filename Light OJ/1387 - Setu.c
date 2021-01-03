#include<stdio.h>
#include<string.h>
int main()
{
    int T,a,i,j,b,sum=0;
    char s[100],s1[100];
    scanf("%d",&T);
    for (i = 1 ; i<=T ; i+=1) {
        scanf("%d",&a);
        for (j = 0 ; j<a ; j+=1) {
            scanf("%s",s);
            if (s == "donate") {
                scanf("%d",&b);
                sum += b;
            }
            else if (s == "report") {
                printf("%d\n",sum);
            }
            s[100] = '\0';
        }
        printf("Case %d:\n",i);
        printf("%d\n",sum);
    }

    return 0;
}

#include<stdio.h>
#include<string.h>
//using namespace std;
int main()
{
    int i,j,t,x,y;
    char s[100];
    scanf("%d",&t);
    one: for (i = 1 ; i <= t ; i+=1) {
        scanf("%d",&x);
        for (j = 0 ; j <= x ; j+=1) {
            scanf("%s",s);
            y = strcmp("water" , s);
            if (j == x && y == 0) {
                printf("Case %d: No\n",i);
                goto one;
            }
            s[100] = '\0';
        }
        printf("Case %d: Yes\n",i);
    }

    return 0;
}

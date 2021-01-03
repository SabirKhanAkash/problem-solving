#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char p[120];
    scanf("%s",p);
    for (i = 0 ; i< strlen(p) ; i+=1) {
        if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9') {
            printf("YES\n");
            break;
        }
    }
    if(i == strlen(p))
        printf("NO\n");
    return 0;
}

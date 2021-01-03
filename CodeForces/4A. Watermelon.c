#include<stdio.h>
int main()
{
    int W;
    scanf("%d",&W);
    if (W%2 == 0 && W!=2)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}

#include<stdio.h>
int main()
{
    int n,a,b,c=0,i;
    scanf("%d",&n);
    for (i = 0 ; i<n ; i+=1) {
        scanf("%d%d",&a,&b);
        if (a<b)
            c+=1;
    }
    if (c>0)
        printf("Happy Alex\n");
    else
        printf("Poor Alex\n");
    return 0;
}

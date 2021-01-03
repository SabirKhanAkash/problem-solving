#include<stdio.h>
int main()
{
    char str[20],str2[20];
    int i,T,j;
    scanf("%d",&T);
    for (i=1 ; i<=T ; i++)
    {
    scanf("%s",str);
    printf("%s\n",str-2);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int s,v1,v2,t1,t2,i,p1,p2;
    scanf("%d%d%d%d%d",&s,&v1,&v2,&t1,&t2);
    p1 = 2*t1 + s*v1;
    p2 = 2*t2 + s*v2;
    if (p1<p2)
        printf("First\n");
    else if (p1>p2)
        printf("Second\n");
    else
        printf("Friendship\n");

    return 0;
}

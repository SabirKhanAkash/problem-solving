#include<stdio.h>
int main()
{
    signed int i,X,Y,sum=0;
    scanf("%d%d",&X,&Y);
    for (i=X+1 ; i<Y; i+=2) {

        sum+=i;

}
    printf("%d",sum);
return 0;
}

#include<stdio.h>
int main()
{
    int n,temp;
    scanf("%d",&n);
    if (n%2 == 0) {
        if (((n/2)-1)%2==0 && ((n/2)+1)%2==0)
            printf("%d %d\n",((n/2)-1)-1,((n/2)+1)+1);
        else
            printf("%d %d\n",((n/2)-1),((n/2)+1));
    }
    else {
        temp = n-1;
        printf("%d %d\n",((temp/2)),(n-(temp/2)));
    }
    return 0;
}

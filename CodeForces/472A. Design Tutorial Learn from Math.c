#include<stdio.h>
int main()
{
    int n,temp;
    scanf("%d",&n);
    if (n%2 == 0) {
        if ((n/2)%2==0)
            printf("%d %d\n",(n/2),(n/2));
        else
            printf("%d %d\n",((n/2)-1),((n/2)+1));
    }
    else {
        temp = n-1;
        if ((temp/2)%2 != 0 && (temp/2)%3 != 0 && (temp/2)%5 != 0 && (temp/2)%7 != 0)
            printf("%d %d\n",(temp/2)+1,(temp/2));
        else
            printf("%d %d\n",((temp/2)-1),((temp/2)+1));

    }
    return 0;
}


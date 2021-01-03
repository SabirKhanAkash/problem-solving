#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    long int x,y;
    while (scanf("%ld%ld",&x,&y)!=EOF) {
        printf("%ld\n",abs(x-y));
    }

    return 0;
}

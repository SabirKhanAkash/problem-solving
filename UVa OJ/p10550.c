#include<bits/stdc++.h>
int main()
{
    long long int i;
    int s,a,b,c,rot,c=0;
    for (i = 1 ; s!=0 && a!=0 && b!=0 && c!=0 ; i+=1){
        scanf("%d%d%d%d",&s,&a,&b,&c);
        if (b!=(a+1) && c!=(b+1))
        {
            rot = (2*360)+(9*abs(s-a))+360+(9*abs(s-b))+(9*abs(s-c));
        }
        else
           // c+=1;
        printf("%d\n",rot-(a+c));
    }

    return 0;
}

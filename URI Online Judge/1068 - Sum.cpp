#include<bits/stdc++.h>
using namespace std;
int main()
{
    signed int N,x,sum=0;
    scanf("%d",&N);
    if(N>=0)
        for(int i=1;i<=N;i++)
            sum += i;
    else if(N<0) {
        x = 0-N;
        for(int i=2;i<=x;i++)
            sum += i;
    }
    if(N==0) printf("1\n");
    else if(N==-1) printf("0\n");
    else if(N>=0) printf("%d\n",sum);
    else if(N<0) printf("-%d\n",sum);
    return 0;
}

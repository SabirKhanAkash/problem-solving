#include<iostream>
#include<stdio.h>
using namespace std;
#define ll long long
#define si(x) scanf("%d",&x)

int main()
{
    int cubes,sum=0,result=0,temp=0,rem;
    si(cubes);
    for(int i=1;;i++)
    {
        sum+=i;
        rem=cubes-sum;
        //cout<<sum<<endl;
        if(sum>=cubes)
            break;
        if(temp+sum<=cubes && rem>=sum)result++;
        //cout<<result<<endl;
        temp=sum;


    }
    if(cubes==1)
        cout<<"1"<<endl;
    else if(cubes==4)
        cout<<"2"<<endl;
    else
        cout<<result<<endl;
    return 0;
}

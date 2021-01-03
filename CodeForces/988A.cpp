#include<bits/stdc++.h>
using namespace std;

int CheckDuplicate(int c[],int l,int m)
{
    int co=0;
    for(int i=0; i<l; i++)
    {
        for(int j=i+1; j<l; j++)
        {
            if(c[i] == c[j])
            {
                co++;
                break;
            }
        }
        if(i==(l-1)){
            break;
        }
    }
    return co;
}
int main()
{
    int n,k,arr[110];
    scanf("%d%d",&n,&k);
    for(int i=0; i<n ; i++)
        scanf("%d",arr[i]);
    cout<<CheckDuplicate(arr,n,k)<<endl;

    return 0;
}

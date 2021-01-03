#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,l,r,le=0,ri=0,flag=0;
    scanf("%d",&T);
    for(int i=0 ; i<T; i++)
    {
        scanf("%d%d",&l,&r);
        for(int j=l ; j<=r ; j++)
        {
            for(int k=l ; k<=r ; k++)
            {
                if(j!=k)
                {
                    if(j%k == 0 || k%j == 0)
                    {
                        cout<<j<<" "<<k<<endl;
                        flag = 1;
                        break;
                    }
                }
            }
            if(flag = 1)
            {
                flag = 0;
                break;
            }
        }
    }

    return 0;
}

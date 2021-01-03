#include<bits/stdc++.h>
using namespace std;

int check(char* str, char* maxStr)
{
    for(int i = 0 ; i<strlen(str) ; i++)
    {
        for(int j=0; j<strlen(maxStr); j++)
        {
            if(maxStr[j] == str[i])
            {

            }

        }
    }
}

int main()
{
    int n,len=0,temp=0,m=0;
    char maxStr[110],str[110][110];
    scanf("%d",&n);
    for(int i=0 ; i<=n ; i++)
    {
        gets(str[i]);
        len = strlen(str[i]);
        if(i==1)
            temp = len;
        if(len>=temp) {
            strcpy(maxStr,str[i]);
            temp = len;
        }
    }

    for(int i=0; i<=temp; i++)
        m = check(str[i],maxStr);

    if(m == 1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}

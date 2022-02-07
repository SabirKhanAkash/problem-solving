#include<stdio.h>
#include<string.h>
#include<iostream>
#include <algorithm>

using namespace std;

bool isPalindrome(string S)
{
    string P = S;
    reverse(P.begin(), P.end());
    if (S == P)
        return true;
    else
        return false;
}

int main()
{
    int t,n,k;
    string str;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        cin>>k;
        cin>>str;
        if(k==0)
            cout<<"1"<<endl;
        else
        {
                if(isPalindrome(str)==true)
                    cout<<"1"<<endl;
                else
                    cout<<"2"<<endl;
        }



    }


    return 0;
}

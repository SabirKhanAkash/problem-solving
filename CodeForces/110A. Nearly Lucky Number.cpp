#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string n;
    int count=0,l,i;
    cin>>n;
    for(i=0 ; i<n.size() ; i++) {
        if(n[i] == '4' || n[i] == '7')
            count++;
    }
    if (count==4 || count==7)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}

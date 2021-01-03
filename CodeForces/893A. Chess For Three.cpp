#include<iostream>
using namespace std;
int main()
{
    int i,n,a,b,c;
    cin>>n;
    for(i=0 ; i<n ; i++) {
        cin>>a;
        b = a;
        if (a == 3 && i==0)
            c = 1;
        if (a==2 && i==1)
            c = 1;
        else if (a!=2 && a!=3)
            c = 1;
    }
    if (c==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}

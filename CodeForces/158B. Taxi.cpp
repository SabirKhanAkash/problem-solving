#include<iostream>
using namespace std;
int main()
{
    long long c1=0,c2=0,c3=0,c4=0,n,i,a[100030],total;
    cin>>n;
    for (i = 0 ; i<n ; i+=1) {
        cin>>a[i];
        if (a[i] == 4)
            c4 += a[i];
        else if (a[i] == 3)
            c3 += a[i];
        else if (a[i] == 2)
            c2 += a[i];
        else
            c1 += 1;

    }
    if ((c3/3) <= c1) {
        total = c4/4 + ((c3/3)+c1)/4 + c2/4;
    else
        total = c4/4 + c3/3 + (c1+c2)/4 + ;
    }
    else
        total = c4/4 + (c3/3)+1 + (c1+c2)/4 ;
        cout<<total<<endl;

    return 0;
}

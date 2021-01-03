#include<iostream>
using namespace std;
int main()
{
    int n,a[110],temp,S=0,i,count=0,x,j;
    cin>>n;
    for (i=0 ; i<n ; i++) {
        cin>>a[i];
        if (n==1) {
            cout<<"0\n";
                break;
        }
        if (i==1) {
            if(a[i]>a[i-1])
                temp=a[i];
            else
                temp=a[i-1];
        }
        if (i>1) {
            if(a[i]>a[i-1]) {
                if (a[i]>temp)
                    temp=a[i];
            }
            else {
                if (a[i]>temp)
                    temp=a[i-1];
            }
        }
    }
    for (j=0 ; j<n ; j++) {
        if(n>1 && i!=0) {
            if (temp==a[j])
                count--;
            if(temp>a[(j)]) {
                x = (temp-a[j]);
                S = S + x;
            }
        }
    }
    if (n!=1)
        cout<<S<<endl;
    return 0;
}


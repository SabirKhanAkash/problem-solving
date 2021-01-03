#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,s,d,i,j,doc[4];
    cin>>n;
    for (i=0  ; i<n ; i++) {
        cin>>s>>d;
        for (j = 0 ; j<n ; j++) {
            doc[i] = s + j*d;
            cout<<doc[i]<<"  "<<endl;
        }
    }
    sort(doc,doc+n);
    for (i = 0 ; i<n ; i++)
        cout<<doc[i]<<" ";
    return 0;
}

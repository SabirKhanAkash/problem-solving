#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
      int n,a,b,p=0,t=0;
     cin>>n;
    for (int i = 0; i<n ; i+=1) {
        cin>>a>>b;
        if (p==0) {
            p += b;
        }
        else {
            p -= a;
            p += b;
            }
        if (p > t) {
            t = p;
          }
    }
        cout<<t<<endl;
     return 0;
}


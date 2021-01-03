#include<iostream>
using namespace std;
int main()
{
    int i,n,a,b,c,meal;
    cin>>n>>a>>b>>c;
    for (i=0 ; i<n && n>1; i++) {
        if (a<b) {
            meal = a+c;
            if (meal==n) {
                cout<<meal<<endl;
                return 0;
            }
        }
        else {
            meal = b + c;
            if (meal == n ) {
                cout<<meal<<endl;
                return 0;
            }
        }
    }
    if (n==1)
        cout<<"0\n"<<endl;
    return 0;
}

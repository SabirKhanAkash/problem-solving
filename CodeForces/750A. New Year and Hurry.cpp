#include<iostream>
using namespace std;
int main()
{
    int n,k,i,solved=0,rem_time,c_time=0;
    cin>>n>>k;
    rem_time = 240 - k;
    for (i=0 ; i<n ; i++) {
        c_time += 5*(i+1);
        if (rem_time >= c_time)
            solved++;
    }
    cout<<solved<<endl;
    return 0;
}

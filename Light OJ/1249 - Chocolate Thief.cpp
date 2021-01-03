#include<bits/stdc++.h>
using namespace std;
int main() {
    int T,n,length,width,height,volume,temp;
    string name;
    cin>>T;
    for (int i=1 ; i<=T ; i++) {
        cin>>n;
        for (int j=0 ; j<n ; j++) {
            cin>>name>>length>>width>>height;
            if (j==0)
                temp = length*width*height;
            volume = length*width*height;
            if(temp < volume) {

                break;
            }
        }
    }
    return 0;
}

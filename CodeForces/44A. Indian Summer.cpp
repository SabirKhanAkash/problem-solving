#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string leave_name;
    string leave_color;
    string new_string;
    string temp[2010];
    int n,i,j,count=0;
    cin>>n;
    for (i=0 ; i<n ; i++) {
        cin>>leave_name>>leave_color;
        new_string = leave_name + leave_color;


        temp[i] = new_string;
        for (j=0 ; j<i && i>0 ; j++) {
            if (new_string == temp[j] ) {
                count--;
                cout<<count<<endl;
            }
        }
        count++;
        cout<<count<<endl;
    }
    cout<<count<<endl;
    return 0;
}

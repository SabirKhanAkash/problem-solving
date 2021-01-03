#include<iostream>
using namespace std;
#include<string>
int main()
{
    int n,i;
    string s1 = "that";
    string s2 = "love";
    string s3 = "hate";
    string s4 = "it";
    cin>>n;
    for (i=1 ; ; i++) {
        if (i == n) {
            if (n==1) cout<<"I"<<s3<<s4;
                break;
            else if(n%2==0)
                cout<<"I"<<s3<<s1
        }

    }

    return 0;
}

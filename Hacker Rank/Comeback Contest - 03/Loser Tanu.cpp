#include<bits/stdc++.h>
#define ll long long
#define sll(x) scanf("%lld",&x)
#define si(x) scanf("%d",&x)
#define sd(x) scanf("%lf",&x)
#define l(n,t) for(int i=n;i<t;i++)
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>s;
        if(s == "map")
            cout<<"map = map < int, int > mp;"<<endl;
        else if(s == "vector")
            cout<<"vector = vector < int > vec;"<<endl;
        else if(s == "stack")
            cout<<"stack = stack < int > st;"<<endl;
        else if(s == "set")
            cout<<"set = set < int > st;"<<endl;
        else if(s == "queue")
            cout<<"queue = queue < int > q;"<<endl;
        else if(s == "priority_queue")
            cout<<"priority_queue = priority_queue < int > q;"<<endl;
    }

    return 0;
}

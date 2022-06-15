#include<bits/stdc++.h>
using namespace std;
//<--------- Coded by SabirKhanAkash 1603108 --------->
 
#define ll                     long long
#define p(a)                   cout<<a<<" "
#define pd(a)                  printf("%lf",a)
#define pf(a)                   printf("%f",a)
#define sd(a)                  scanf("%lf",&a)
#define sf(a)                  scanf("%f",&a)
#define si(a)                  scanf("%d",&a)
#define sl(a)                  scanf("%lld",&a)
#define loop(i,b)              for(i=0;i<b;i++)
#define loope(i,b)             for(i=0;i<=b;i++)
#define FOR(i,a,b)             for(i=a;i<b;i++)
#define FORE(i,a,b)            for(i=a;i<=b;i++)
#define rev(s)                 reverse(s.begin(),s.end())
#define inf                    9000000000000000
#define pie                    3.1415926536
#define pb(a)                  push_back(a)
#define pop(a)                pop_back(a)
#define in(a,b)                insert({a,b})
#define test                   printf(" <---I'm Here--> ")
#define tc(a)                  while(a--)
#define nl                     printf("\n")
#define sorted(a)              sort(a.begin(),a.end())
#define bsorted(a)             sort(a.begin(),a.end(),greater<ll>())
#define arrsort(a)             sort(a, a + sizeof(a) / sizeof(a[0]))
#define arrbsort(a)            sort(a, a + (sizeof(a) / sizeof(a[0])), greater<ll>())
#define i2s(arr,a)             std::sprintf(arr, "%d", a);
 
void printVec(vector<int>group)
{
    vector<int>::iterator itt;
    for(itt=group.begin(); itt!=group.end(); ++itt)
    {
        cout<<*itt<<" ";
    }
    nl;
}
 
int main()
{
    ll n;
    int i,m,count=0,count_1=0,flag=0,flag_1=0;
    vector<int>group;
 
    sl(n);
    loop(i,n)
    {
        si(m);
        if(m == 1)
            count_1++;
        group.pb(m);
    }

    if(count_1%4==0)
        flag_1=1;
 
    bsorted(group);
 
 
    vector<int>::iterator it;
    vector<int>::iterator itt;
    vector<int>::iterator it2;
    // printVec(group);

    for(itt=group.begin(); itt!=group.end();)
    {
        if(*itt == 1)
            group.erase(itt);
    }

    for(itt=group.begin(); itt!=group.end(); ++itt)
    {
        cout<<*itt<<" ";
    }
    nl;
    if(flag_1=0)
    {
        for(int i=0;i<(count_1%4);i++)
            group.pb(1);
    }
        

 
    for(it=group.begin(); it!=group.end();)
    {
        // test;
        if(*it == 4)
        {
            for(it2=group.begin(); it2!=group.end(); ++it2)
            {
                if(*it2 == 0)
                {
                    count++;
                    group.erase(it2);
                    flag = 0;
                    // cout<<"count-> "<<count<<" | it2 -> ";
                    // cout<<*it2<<" | ";
                    
                    break;
                }
                else
                    flag = 1;
            }
            if(flag == 1)
            {
                count++;
                flag = 0;
            }
            group.erase(it);
            // printVec(group);
        }
 
        else if(*it == 3)
        {
            for(it2=group.begin(); it2!=group.end(); ++it2)
            {
                if(*it2 == 1)
                {
                    count++;
                    group.erase(it2);
                    flag = 0;
                    // cout<<"count-> "<<count<<" | it2 -> ";
                    // cout<<*it2<<" | ";
                    
                    break;
                }
                else
                    flag = 1;
            }
            if(flag == 1)
            {
                count++;
                flag = 0;
            }
            group.erase(it);
            // printVec(group);
        }
 
        else if(*it == 2)
        {
            for(it2=group.begin(); it2!=group.end(); ++it2)
            {
                if(*it2 == 2)
                {
                    count++;
                    group.erase(it2);
                    flag = 0;
                    // cout<<"count-> "<<count<<" | it2 -> ";
                    // cout<<*it2<<" | ";
                    break;
                }
                else
                    flag = 1;
            }
            if(flag == 1)
            {
                count++;
                flag = 0;
            }
            group.erase(it);
            // printVec(group);
        }
 
        else if(*it == 1)
        {
            for(it2=group.begin(); it2!=group.end(); ++it2)
            {
                if(*it2 == 3)
                {
                    count++;
                    group.erase(it2);
                    flag = 0;
                    // cout<<"count-> "<<count<<" | it2 -> ";
                    // cout<<*it2<<" | ";
                    break;
                }
                else
                    flag = 1;
            }
            if(flag == 1)
            {
                count++;
                flag = 0;
            }
            group.erase(it);
            // printVec(group);
        }
        if(group.size() == 1)
        {
            count++;
            break;
        }
            
    }
 
    cout<<count<<endl;
 
    return 0;
}
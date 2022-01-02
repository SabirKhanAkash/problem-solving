#define ll long long
#define p() printf("I'm Here Now");

#define pi(x) printf("%d",x)
#define pf(x) printf("%f",x)
#define pd(x) printf("%lf",x)
#define pc(x) printf("%c",x)
#define ps(x) printf("%s",x)

#define si(x) scanf("%d",&x)
#define sf(x) scanf("%f",&x)
#define sd(x) scanf("%lf",&x)
#define sc(x) scanf("%c",&x)
#define ss(x) scanf("%s",&x)

#define nl() printf("\n");
#define psp() printf(" ")

#define loop(i,p,q,r) for(int i=p; i<q; i=i+r)


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include <iostream>
#include<vector>
#include<map>
#include<unordered_map>
//#include<bits/stdc++.h>

using namespace std;


void findDistinct(string userName)
{
    unordered_map<char, int> d;
    for(char i: userName)
        d[i] = d[i] +1;

    for(char i:userName)
    {
        if(d[i]!=0)
        {
            pc(i);
            psp();
            pi(d[i]);
            nl();
            d[i] = 0;

        }

    }

    nl();
}

int main()
{
    string userName;
    ss(userName);

    findDistinct(userName);



    return 0;
}

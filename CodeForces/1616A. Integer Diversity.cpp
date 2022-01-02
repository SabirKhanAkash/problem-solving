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

#define psp() printf(" ")
#define nl() printf("\n")

#define loop(i,p,q,r) for(int i=p; i<q; i=i+r)

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include <iostream>
#include<vector>
//#include<bits/stdc++.h>

using namespace std;

int checkFreq(int arr[], int n)
{
    int result=0;
    vector<bool> visited(n,false);
    int CountArr[110];
    for(int i=0; i<n; i++)
    {
        if(visited[i] == true)
            continue;

        int count = 1;
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                visited[j] = true;
                count++;
            }
        }
        CountArr[i] = count;

        /*
        pi(arr[i]);
        psp();
        pi(count);
        psp();
        pi(CountArr[i]);
        nl();
        */

        if(CountArr[i]>1)
        {
            if(arr[i]==0)
                result++;
            else
                result+=2;
        }
        else
            result++;
    }

    return result;
}

int main()
{
    signed int p,t,arr[110];
    int result=0;
    si(t);
    for(int i=0;i<t;i++)
    {
        si(p);
        for(int j=0; j<p; j++)
            si(arr[j]);
        result = checkFreq(arr,p);
        pi(result);
        nl();
    }

    return 0;
}

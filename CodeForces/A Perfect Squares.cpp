#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
void Bubble_sort( int n, int num[])
{
    for(int i=0; i<n-1; i++)
      for(int j=0; j<(n-1)-i; j++)
         if(num[j]<num[j+1])
         {
            int t=num[j];
            num[j]=num[j+1];
            num[j+1]=t;
         }
}

int main()
{
    signed int a,n,arr[1010],c;
    double int_part;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    Bubble_sort(n,arr);
    for(int i=0;i<n;i++)
    {
        if((modf(sqrt(arr[i]),&int_part)==0.0)==0) {
            c = arr[i];
            break;
        }
    }
    printf("%d\n",c);
    return 0;
}

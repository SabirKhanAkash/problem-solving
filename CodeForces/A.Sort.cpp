#include<stdio.h>
#include<iostream>
using namespace std;
void Bubble_sort(int n,int num[])
{
    for(int i=0; i<n-1; i++)
      for(int j=0; j<(n-1)-i; j++)
         if(num[j]>num[j+1])
         {
            int t=num[j];
            num[j]=num[j+1];
            num[j+1]=t;
         }
}
void Bubble_revSort(int n,int num[])
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
    signed int n,arr[1010],arr2[1010],arr3[1010],c=0,d=0,i,j,k;
    for(int i=0;i<1010;i++)
        arr2[i]=-1;
    for(int i=0;i<1010;i++)
        arr3[i]=-1;
    cin>>n;
    for(i=0,j=0,k=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<0) {
            arr2[j]=arr[i];
            j++;
            c=j;
        }

        if(arr[i]>=0){
            arr3[k]=arr[i];
            k++;
            d=k;
        }
    }
    Bubble_sort(d,arr3);
    Bubble_revSort(c,arr2);
    for(i=0;i<n;i++) {
        if(i!=n-1) {
            cout<<arr3[i]<<" ";
            cout<<arr2[i]<<" ";
        }
        else
            cout<<arr2[i]<<endl;
    }
    return 0;
}

#include<stdio.h>
#include<iostream>
using namespace std;


int main()
{
  int n,arr[1010];
  int f1 = 1, f2 = 2;
  scanf("%d",&n);
  if(n!=1) {
  cout<<"OO";
  for(int i=3,k=1,j=1;i<=n;i++,j++)
  {
      int next = f1 + f2;
      f1 = f2;
      f2 = next;
      arr[j]=next;
      //cout<<next<<endl;
      //cout<<i<<endl;
      if(i==arr[k]){
        cout<<"O";
        k++;
      }
      else
        cout<<"o";
  }
}
  else
    cout<<"O";

  return 0;
}

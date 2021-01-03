#include<stdio.h>
int main()
{
   int i,n,k,arr[100],c=0;
   scanf("%d %d",&n,&k);
   for(i = 0 ; i<n ; i+=1) {
      scanf("%d",&arr[i]);
   }
   for(i = 0 ; i<n ; i+=1) {
      if(arr[i]>=arr[k-1]&&arr[i]>0)
         c+=1;
   }
   printf("%d\n",c);
   return 0;
}

#include<stdio.h>
int main()
{
   int a,b,c,d,e,f, p_count=0;
   scanf("%d",&a);
   if(a>0)  p_count++;
   scanf("%d",&b);
   if(b>0)  p_count++;
   scanf("%d",&c);
   if(c>0)  p_count++;
   scanf("%d",&d);
   if(d>0)  p_count++;
   scanf("%d",&e);
   if(e>0)  p_count++;
   scanf("%d",&f);
   if(f>0)  p_count++;
   printf("%d valores positivos\n",p_count);
}

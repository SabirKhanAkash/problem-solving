#include <stdio.h>
#include <string.h>
#include <stdlib.h>
unsigned long int conv(char ipadr[])
{
 unsigned long int num=0,val;
 char *tok,*ptr;
 tok=strtok(ipadr,".");
 while( tok != NULL)
 {
  val=strtoul(tok,&ptr,0);
  num=(num << 8) + val;
  tok=strtok(NULL,".");
 }
 return(num);
}
union iptolint
{
 char ip[16];
 unsigned long int n;
};

main()
{
 union iptolint ipl;
 printf(" Read the IP Address to be converted\n");
 scanf("%s",ipl.ip);
 ipl.n=conv(ipl.ip);
 printf(" Equivalent 32-bit long int is : %lu\n",ipl.n);
}



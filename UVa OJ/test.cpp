#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,p,l,c=0;
    char j[100],u[10]={'0','1','2','3','4','5','6','7','8','9'},k[100];
    for (i = 0,l=0 ; j[i]!='\r' ; i+=1,l+=1) {
        scanf("%c",j[i]);
        if (j[i] == u[l])
            c +=1;
    }
    for (i = 0 ; i<c ; i+=1 )
        printf("%c",k[i]);

    return 0;
}

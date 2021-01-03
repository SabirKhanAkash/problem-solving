#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,c=0;
    char x[100];
    scanf("%d",&n);
    for (i = 0 ; i<n ; i+=1) {
        scanf("%s",x);
        for (j = 0 ; j<strlen(x) ; j+=1) {
            if ( (x[j] == '+' && x[j+1] == '+' && x[j+2] == 'X' ) || (x[j] == 'X' && x[j+1] == '+' && x[j+2] == '+' ) )
                c+=1;
            else if ( (x[j] == '-' && x[j+1] == '-' && x[j+2] == 'X' ) || (x[j] == 'X' && x[j+1] == '-' && x[j+2] == '-' ) )
                c-=1;
        }
    }
    printf("%d\n",c);

    return 0;
}

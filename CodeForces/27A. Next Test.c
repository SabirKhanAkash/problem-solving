#include<stdio.h>
int main()
{
    int n,indx[3010],i,j,temp;
    scanf("%d",&n);
    for (i=0 ; i<n ; i++) {
        scanf("%d",&indx[i]);
        if (i>0) {
            if (indx[i]>indx[i-1])
                temp = indx[i-1];
            else
                temp = indx[i];
        }
        for (j=0 ; j<n ; j++)
            if (temp+1 == indx[i+j])
                temp++;
    }
    printf("%d\n",temp+1);
    return 0;
}

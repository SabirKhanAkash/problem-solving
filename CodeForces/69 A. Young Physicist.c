#include<stdio.h>
int main()
{
    int row,i,j,sumA=0,sumB=0,sumC=0;
    scanf("%d",&row);
    signed int n,co[row][2];
    for (i=0 ; i<row ; i+=1) {
        for (j=0 ; j<3 ; j+=1) {
            scanf("%d",&co[i][j]);
        }
        sumA += co[i][0];
        sumB += co[i][1];
        sumC += co[i][2];
    }
    if (sumA == 0 && sumB == 0 && sumC == 0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}

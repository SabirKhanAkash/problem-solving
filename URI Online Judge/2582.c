#include<stdio.h>
int main()
{
    int C,X,Y,j,i,a,k;
    scanf("%d",&C);
    for (i = 1 ; i <= C ; i++) {
        scanf("%d%d",&X,&Y);
        if (X<=5 && Y<=5)
            a = X + Y;
        else if (X>5 || Y>5 || X<0 || Y<0)
            continue;
        switch (a) {
        case 0:
            printf("PROXYCITY\n");
            break;
        case 1:
            printf("P.Y.N.G.\n");
            break;
        case 2:
            printf("DNSUEY!\n");
            break;
        case 3:
            printf("SERVERS\n");
            break;
        case 4:
            printf("HOST!\n");
            break;
        case 5:
            printf("CRIPTONIZE\n");
            break;
        case 6:
            printf("OFFLINE DAY\n");
            break;
        case 7:
            printf("SALT\n");
            break;
        case 8:
            printf("ANSWER\n");
            break;
        case 9:
            printf("RAR?\n");
            break;
        case 10:
            printf("WIFI ANTENNAS\n");
            break;

        default:
            break;
        }
    }
    return 0;
}

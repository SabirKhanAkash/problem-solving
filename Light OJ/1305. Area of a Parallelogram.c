#include<stdio.h>
#include<math.h>
int main()
{
    signed long int T,ax,ay,bx,by,cx,cy,dx,dy,area,t1,t2,t3,t4,i;
    scanf("%ld",&T);
    for (i = 1 ; i <= T ; i++) {
        scanf("%ld%ld%ld%ld%ld%ld",&ax,&ay,&bx,&by,&cx,&cy);
        dx = cx + ax - bx;
        dy = ay + cy - by;
        t1 = bx - ax;
        t2 = by - ay;
        t3 = cx - bx;
        t4 = cy - by;
        area = abs((t1 * t4)-(t2 * t3));
        printf("Case %ld: %ld %ld %ld\n",i,dx,dy,area);
    }
    return 0;
}

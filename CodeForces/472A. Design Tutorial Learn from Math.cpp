#include<stdio.h>
int is_prime(int num)
{
     if (num <= 1) return 0;
     if (num % 2 == 0 && num > 2) return 0;
     for(int i = 3; i < num / 2; i+= 2)
     {
         if (num % i == 0)
             return 0;
     }
     return 1;
}
int main()
{
    int n,p,q,i,c=0;
    scanf("%d",&n);
    if (n%2 == 0) {
        p = n/2;
        q = n/2;
    }
    else {
        p = (n+1)/2;
        q = (n-1)/2;
    }
    for (i = 0 ; i<n ; i++) {
        if (is_prime(p)==1) {
            p = p+1;
            q = q-1;
        }
        if (is_prime(q)==1) {
            p = p+1;
            q = q-1;
        }
        if (is_prime(p) != 1 && is_prime(q) != 1)
            break;
    }
    printf("%d %d\n",p,q);
    return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,j;
    scanf("%d",&n);
    char s[n];
    if (n == 1)
        printf("a\n");
    else if (n == 2)
        printf("aa\n");
    if (n>3)
        for (i = 0 ; i<n ; i+=2) {
            s[i] = 'a';
            s[i+1] = 'b';
        }
    if (n == 3) {
        for (j = 0 ; j< (strlen(s))-1 ; j+=1) {
            if (s[j] == s[j+2])
                s[j] = 'c';
        }
    }
    if (n!=1 && n!=2) {
        printf("%s",s);
        printf("\n");
    }
    return 0;
}

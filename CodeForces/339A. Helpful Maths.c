#include<stdio.h>
#include<string.h>
int main() {
    int i,j;
    char s[130],t[100];
    scanf("%s",s);
    if (strlen(s) != 1) {
        for (i = 1 ; i < (strlen(s)-1) ; i+=1)
           for (j=0 ; j<(strlen(s)-2) ; j+=1)
               if (s[j] > s[j+2]) {
                  t[j] = s[j];
                   s[j] = s[j+2];
                  s[j+2] = t[j];
               }
        printf("%s",s);
        printf("\n");
    }
    else {
        printf("%s",s);
        printf("\n");
    }
    return 0;
}

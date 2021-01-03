#include<stdio.h>
#include<string.h>
int main()
{
    int x,i;
    char s[120];
    scanf("%s",s);
    for (i = 0 ; i< strlen(s) ; i+=1) {
        if ((s[i] == 'a' || s[i] == 'j' || s[i] == 's' ||
        s[i] == 'b' || s[i] == 'k' || s[i] == 't' ||
        s[i] == 'c' || s[i] == 'l' || s[i] == 'u' ||
        s[i] == 'd' || s[i] == 'm' || s[i] == 'v' ||
        s[i] == 'e' || s[i] == 'n' || s[i] == 'w' ||
        s[i] == 'f' || s[i] == 'o' || s[i] == 'x' ||
        s[i] == 'g' || s[i] == 'p' || s[i] == 'y' ||
        s[i] == 'h' || s[i] == 'q' || s[i] == 'z' ||
        s[i] == 'i' || s[i] == 'r')) {
            if (i == 0)
                s[i] = s[i] - 32;
            else
                s[i] = s[i] + 0;
        }
        else {
                s[i] = s[i] + 0;
        }
    }
    printf("%s\n",s);
    printf("\n");
    return 0;
}

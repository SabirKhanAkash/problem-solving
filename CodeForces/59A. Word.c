#include<stdio.h>
#include<string.h>
int main() {
    char word[110];
    int i,n,count_U=0,count_L=0;
    scanf("%s",word);
    n = strlen(word);
    for (i=0 ; i<n ; i++) {
        if (word[i] >= 'A' && word[i]<='Z')
            count_U++;
        else if (word[i] >= 'a' && word[i]<='z')
            count_L++;
    }
        if (count_U > count_L)
            strupr(word);
        else if(count_U < count_L)
            strlwr(word);
        else if (count_U == count_L)
            strlwr(word);
    printf("%s",word);
    printf("\n");
    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n;
    char string[110];
    scanf("%s",string);
    n = strlen(word);
    for(i=0; i<n; i++)
        for(j=i+1; j<n; j++)
            if(word[i]==word[j])
                word[j]=0;
    for(i=0,j=0; i<n; i++)
        if(word[i]!=0)
            j++;
    if(j%2==0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");
    return 0;
}

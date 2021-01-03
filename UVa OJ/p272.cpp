#include <stdio.h>
int main()
{
    char tempChar;
    int i=1;

    while(scanf("%c",&tempChar)!=EOF){
        if(tempChar == '"'){
            if(i==1){
                printf("``");
                i+=1;
                continue;
            }
            else{
                printf("''");
                i-=1;
                continue;
            }
        }
        printf("%c",tempChar);
    }
    return 0;
}

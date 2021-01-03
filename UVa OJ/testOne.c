#include <stdio.h>
#include <stdlib.h>

int main()
{

    char tempChar[10000];
    int i=1;

    while(gets(tempChar)){
        if(tempChar == '"'){
            if(i==1){
                printf("``");
                i++;
                continue;
            }else{
                printf("''");
                i--;
                continue;
            }
        }
        printf("%s",tempChar);
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char shift;
    char input[100],key[30] = "qwertyuiopasdfghjkl;zxcvbnm,./";
    scanf("%c",&shift);
    scanf("%s",input);
    if (shift == 'R') {
        for (i=0 ; i<strlen(input) ; i+=1) {
            for (j=0 ; j<30 ; j+=1) {
                if (input[i] == key[j]) {
                    printf("%c",key[j-1]);
                    break;
                }
            }
        }
    }
    if (shift == 'L') {
        for (i=0 ; i<strlen(input) ; i+=1) {
            for (j=0 ; j<30 ; j+=1) {
                if (input[i] == key[j]) {
                    printf("%c",key[j+1]);
                    break;
                }
            }
        }
    }
    printf("\n");
    return 0;
}

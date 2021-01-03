/* 34 = "
    39 = '
    96 = `
    */

#include<bits/stdc++.h>
int main()
{
    static char s[10000];
    int c=0,p=1,i;
    while (gets(s)) {
        for (i = 0 ; s[i]!='\0' ; i+=1) {
            if(s[i] == (char)34 && (p%2)!=0) {
                    /* while(s[i]!=(char)34)
                    {
                        s[i+2]=s[i+1];
                    } */

                //s[i+2]=s[i+1];
                s[]
                s[i] = (char)96;
                s[i+1]=(char)96;
                p+=1;
                continue;
            }
            else if(p%2 == 0 && p>0 && s[i] == (char)34 ) {
                //s[i+2]=s[i+1];
                s[i] = (char)39;
                s[i+1]=(char)39;
                p-=1;
                continue;

            }
        }
    puts(s);

    }
    return 0;
}

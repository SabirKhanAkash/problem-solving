#include<iostream>
#include<stdio.h>
using namespace std;
int main() {
    string f,m,s;
    cin>>f>>m>>s;
    if(f=="rock") {
        if (m=="rock") {
            if (s=="rock")
                printf("?\n");
            else if(s=="paper")
                printf("S\n");
            else
                printf("?\n");
        }
        else if(m=="scissors") {
            if(s=="scissors")
                printf("F\n");
            else if(s=="rock")
                printf("?\n");
            else if (s=="paper")
                printf("?\n");
        }
        else if(m=="paper") {
            if(s=="scissors")
                printf("?\n");
            else if(s=="rock")
                printf("M\n");
            else if (s=="paper")
                printf("?\n");
        }
    }

    if(f=="scissors") {
        if (m=="scissors") {
            if (s=="scissors")
                printf("?\n");
            else if(s=="rock")
                printf("S\n");
            else if (s=="paper")
                printf("?\n");
        }
        else if(m=="rock") {
            if(s=="scissors")
                printf("M\n");
            else if(s=="rock")
                printf("?\n");
            else if (s=="paper")
                printf("?\n");
        }
        else if(m=="paper") {
            if(s=="scissors")
                printf("?\n");
            else if(s=="rock")
                printf("?\n");
            else if (s=="paper")
                printf("F\n");
        }
    }
    if(f=="paper") {
        if (m=="rock") {
            if (s=="rock")
                printf("F\n");
            else
                printf("?\n");
        }
        else if(m=="scissors") {
            if(s=="scissors")
                printf("?\n");
            else if(s=="rock")
                printf("?\n");
            else if (s=="paper")
                printf("M\n");
        }
        else if(m=="paper") {
            if(s=="scissors")
                printf("S\n");
            else if(s=="rock")
                printf("?\n");
            else if (s=="paper")
                printf("?\n");
        }
    }
    return 0;
}

#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int f(int n) {
    if (n == 1)
        return n;
    else {
        return f(n-1);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    f();


    return 0;
}

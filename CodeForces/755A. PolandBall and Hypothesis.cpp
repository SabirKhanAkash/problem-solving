#include<iostream>
using namespace std;
int is_prime(int num)
{
     if (num <= 1)
        return 0;
     if (num % 2 == 0 && num > 2)
        return 0;
     for(int i = 3; i < num / 2; i+= 2) {
         if (num % i == 0)
             return 0;
     }
     return 1;
}
int main()
{
    int n,m,a;
    cin>>n;
    for (m=1 ; ; m++) {
        a = n*m +1;
        if (is_prime(a)==0)
            break;
    }
    cout<<m<<endl;
    return 0;
}

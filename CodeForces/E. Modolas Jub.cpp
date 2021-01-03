#include<iostream>
using namespace std;
int main()
{
    int M,A,B;
    cin>>M;
    for (int i = 1 ; i <= M ; i+=1) {
        cin>>A>>B;
       if (A<B)
        {
            int temp = A;
            A= B;
            B = temp;
        }
        if (A<=0 || B<=0 ) {
            if (i == M)
                cout<<"Unposibol Caso."<<endl;
            else
                cout<<"Unposibol Caso.\n"<<endl;
        }
        else if (A<=10 && B<=10 && A>=B && A>0 && B>0 ) {
            if (i == M)
                cout<<A%B<<'\n'<<"Modolas Jub is successful."<<endl;
            else
                cout<<A%B<<'\n'<<"Modolas Jub is successful.\n"<<endl;
        }
    }

    return 0;
}

#include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;

int a[8]={0,0,0,0,1,1,1,1};
int b[8]={0,0,1,1,0,0,1,1};
int c[8]={0,1,0,1,0,1,0,1};
int x[4]={0,0,1,1};
int y[4]={0,1,0,1};
int v;

void menu();
void AND();
void OR();
void NOT();
void XOR();
void CO();

int main()
{
    cout<<"How many Variables (2/3): ";
    cin>>v;
    menu();

    return 0;
}

void menu()
{
    int op;
    cout<<"1. AND"<<endl;
    cout<<"2. OR"<<endl;
    cout<<"3. NOT"<<endl;
    cout<<"4. XOR"<<endl;
    cout<<"5. Conditional Operator"<<endl;
    cout<<"Enter your Option (1 ~ 5): ";
    cin>>op;
    cout<<"\n*** TRUTH TABLE ***"<<endl;
    switch(op)
    {
    case 1:
        AND();
        break;
    case 2:
        OR();
        break;

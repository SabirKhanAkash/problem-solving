#include<bits/stdc++.h>
using namespace std;

int A_PointX(double d,double l,double h,int x1,int y1,int x2,int y2)
{
    return ((l*(x2-x1))/d)+((h*(y2-y1))/d)+x1;
}

int A_PointY(double d,double l,double h,int x1,int y1,int x2,int y2)
{
    return ((l*(y2-y1))/d)-((h*(x2-x1))/d)+y1;
}

int B_PointX(double d,double l,double h,int x1,int y1,int x2,int y2)
{
    return ((l*(x2-x1))/d)-((h*(y2-y1))/d)+x1;
}

int B_PointY(double d,double l,double h,int x1,int y1,int x2,int y2)
{
    return ((l*(y2-y1))/d)+((h*(x2-x1))/d)+y1;
}

int solveXY(double d)
{
    int r1,r2,x1,x2,y1,y2;
    double l = ((r1*r1)-(r2*r2)+(d*d))/(2*d);
    double h = sqrt((r1*r1)-(l*l));
    return sqrt(((A_PointX(d,l,h,x1,y1,x2,y2))*(B_PointX(d,l,h,x1,y1,x2,y2)))+((A_PointY(d,l,h,x1,y1,x2,y2))*(B_PointY(d,l,h,x1,y1,x2,y2))));
}

double bk(double d)
{
    int r1,r2,x1,x2,y1,y2;
    return (2.00*asin(((solveXY(d))/2.00)/r1)*(r1*r1))/2.00;
}

double triangle(double d)
{
    int r1,r2,x1,x2,y1,y2;
    return 0.5*((solveXY(d))/2.00)*sqrt(r1*r1);
}

double result(double d)
{
    return 2*(bk(d)-triangle(d));
}

int main()
{
    int t;
    int x1,x2,r1,y1,y2,r2;
    double d;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
    cin>>x1>>y1>>r1>>x2>>y2>>r2;
    d = (double)sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
    cout<<"Case "<<i<<": "<<result(d)<<endl;
    }
    return 0;
}

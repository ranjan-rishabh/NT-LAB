#include<bits/stdc++.h>
#define ll long long
using namespace std;
double fn1(double x,double y)
{
    return  y+x*x-x-1;
}
double fn2(double x,double y)
{
    return  x*x-2*y*y-y;
}
double fnx1(double x,double y)
{
    return 2*x-1;
}
double fny1(double x,double y)
{
    return 1;
}
double fnx2(double x,double y)
{
    return 2*x;
}
double fny2(double x,double y)
{
    return -4*y-1;
}
main()
{
    double  x,y;
    cin>>x>>y;
    ll t=100;
    while(t--)
    {
        double tx,ty;
        tx=x-((fny2(x,y)*fn1(x,y)+(-fny1(x,y))*fn2(x,y))/(fnx1(x,y)*fny2(x,y)-fny1(x,y)*fnx2(x,y)));
        ty=y-(((-fnx2(x,y))*fn1(x,y)+fnx1(x,y)*fn2(x,y))/(fnx1(x,y)*fny2(x,y)-fny1(x,y)*fnx2(x,y)));
        x=tx;
        y=ty;
    }
    cout<<setprecision(30)<<x<<'\t'<<y;
}

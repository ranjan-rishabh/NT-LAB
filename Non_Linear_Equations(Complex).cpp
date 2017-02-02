#include<bits/stdc++.h>
#define ll long long
using namespace std;
double fn1(double x,double y)
{
    return  x*x*x-3*x*y*y+1;
}
double fn2(double x,double y)
{
    return  3*x*x*y-y*y*y;
}
double fnx1(double x,double y)
{
    return 3*x*x-3*y*y;
}
double fny1(double x,double y)
{
    return -6*y*x;
}
double fnx2(double x,double y)
{
    return 6*x*y;
}
double fny2(double x,double y)
{
    return 3*x*x-3*y*y;
}
main()
{
    double  x,y;
    double tx,ty;
    cin>>x>>y;
    ll t=10000;
    while(fn1(x,y)!=0&&fn2(x,y)!=0)
    {
        tx=x-((fny2(x,y)*fn1(x,y)+(-fny1(x,y))*fn2(x,y))/(fnx1(x,y)*fny2(x,y)-fny1(x,y)*fnx2(x,y)));
        ty=y-(((-fnx2(x,y))*fn1(x,y)+fnx1(x,y)*fn2(x,y))/(fnx1(x,y)*fny2(x,y)-fny1(x,y)*fnx2(x,y)));
        x=tx;
        y=ty;
    }
    cout<<setprecision(30)<<x<<'\t'<<y;
}

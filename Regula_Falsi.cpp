#include<bits/stdc++.h>
#define ll long long
using namespace std;
double fn(double c)
{
    return c*c*c-3*c+1;
}
main()
{
    ll t=2000;
    double a,b,c;
    cin>>b>>a;
    c=(b*fn(a)-a*fn(b))/(fn(a)-fn(b));
    b=a;a=c;
    while(fn(c)<1e-20)
    {
        c=(b*fn(a)-a*fn(b))/(fn(a)-fn(b));
        b=a;
        a=c;
        //cout<<fn(c)<<'\t';
    }
    cout<<c;
}

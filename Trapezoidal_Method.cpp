#include<bits/stdc++.h>
#define ll long long
using namespace std;
double f(double x)
{
    return exp(x*x);
}
main()
{
    double a,b,n;
    cin>>a>>b>>n;
    double h=(b-a)/n;
    double ans=0.0;
    a+=h;
    ans=0.5*(f(0)+f(1));
    for(int i=1;i<n;i++,a+=h)
    {
        ans+=f(a);
    }
    ans=ans*h;
    cout<<ans;
}
